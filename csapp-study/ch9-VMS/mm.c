#include "mm.h"
#include "memlib.h"
#include <csapp.h>

#define WSIZE		4
#define DSIZE		8
#define CHUNKSIZE	(1 << 12)
#define MAX(x,y)			((x) > (y) ? (x) : (y))
#define PACK(size, alloc) 	((size) | (alloc))
#define GET(p)				(*(unsigned int *)(p))
#define PUT(p, val)			(*(unsigned int *)(p) = (val))
#define GET_SIZE(p)			(GET(p) & ~0x7)
#define GET_ALLOC(p)		(GET(P) & 0x1)
#define HDRP(bp)			((char *)(bp) - WSIZE)
#define FTRP(bp)			((char *)(bp) + GET_SIZE(HDRP(bp)) - DSIZE)
#define NEXT_BLKP(bp)		((char *)(bp) + GET_SIZE(((char *)(bp) - WSIZE)))
#define PREV_BLKP(bp)		((char *)(bp) - GET_SIZE(((char *)(bp) - DSIZE)))

static void *heap_listp;
static void *coalesce(void *bp);
static void *extend_heap(size_t words);
int mm_init(void);
static void place(void *bp, size_t asize);
static void *find_fit(size_t asize);


static void *coalesce(void *bp){
	size_t prev_alloc = GET_ALLOC(FTRP(PREV_BLKP(bp)));
	size_t next_alloc = GET_ALLOC(FTRP(NEXT_BLKP(bp)));

	size_t size = GET_SIZE(HDRP(bp));

	if(prev_alloc && next_alloc){
		return bp;
	}

	if(prev_alloc && !next_alloc){
		size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
		PUT(HDRP(bp),PACK(size, 0));
		PUT(FTRP(bp),PACK(size, 0));
	}

	if(!prev_alloc && next_alloc){
		size += GET_SIZE(HDRP(PREV_BLKP(bp)));
		PUT(FTRP(bp),PACK(size, 0));
		PUT(HDRP(PREV_BLKP(bp)),PACK(size, 0));
		bp = PREV_BLKP(bp);
	}

	if(!prev_alloc && !next_alloc){
		size += GET_SIZE(HDRP(PREV_BLKP(bp))) + GET_SIZE(HDRP(NEXT_BLKP(bp)));
		PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0));
		PUT(FTRP(NEXT_BLKP(bp)), PACK(size, 0));
		bp = PREV_BLKP(bp);
	}
	return bp;
}

static void *extend_heap(size_t words){
	char *bp;
	size_t size;

	size = (words % 2) ? (words + 1) * WSIZE : words * WSIZE;

	if((long)(bp = mem_sbrk(size)) == -1) return NULL;

	PUT(HDRP(bp), PACK(size, 0));
	PUT(FTRP(bp), PACK(size, 0));
	PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1));

	return coalesce(bp);
}





int mm_init(void){
	if((heap_listp = mem_sbrk(4 * WSIZE)) == (void *)-1) return -1;
	PUT(heap_listp, 0);
	PUT(heap_listp + (1 * WSIZE), PACK(DSIZE, 1));
	PUT(heap_listp + (2 * WSIZE), PACK(DSIZE, 1));
	PUT(heap_listp + (3 * WSIZE), PACK(0, 1));

	heap_listp += (2 * WSIZE);
	printf("heap_listp: %p, size: %u\n", heap_listp, GET_SIZE(HDRP(heap_listp)));
	if(extend_heap(CHUNKSIZE/WSIZE) == NULL) return -1;

	return 0;
}
static void place(void *bp, size_t asize){
	size_t left_size = GET_SIZE(HDRP(bp)) - asize;
	if(left_size >= 16){
		PUT(FTRP(bp), PACK(left_size, 0));
		PUT(HDRP(bp), PACK(asize, 1));
		PUT(FTRP(bp), PACK(asize, 1));
		PUT(HDRP(NEXT_BLKP(bp)), PACK(left_size, 0));
	}else{
		PUT(HDRP(bp), PACK(left_size + asize, 1));
		PUT(FTRP(bp), PACK(left_size + asize, 1));
	}
}
static void *find_fit(size_t asize){
	void *bp = heap_listp;
	size_t size;
	while((size = GET_SIZE(HDRP(bp))) != 0){
		printf("find_fit: %p %lu\n", bp, size);
		if(size >= asize) return bp;
		bp = NEXT_BLKP(bp);
	}
	return NULL;
}
void *mm_malloc(size_t size){
	size_t asize;
	size_t extendsize;
	char *bp;
	if(size == 0) return NULL;
	if(size <= DSIZE) asize = 2 * DSIZE;
	else asize = DSIZE * ((size + (DSIZE) + (DSIZE -1)) / DSIZE);
	printf("mm_malloc-asize: %lu\n", asize);

	if((bp = find_fit(asize)) != NULL){
		place(bp, asize);
		return bp;
	}

	extendsize = MAX(asize, CHUNKSIZE);
	if((bp = extend_heap(extendsize / WSIZE)) == NULL) return NULL;
	place(bp, asize);
	return bp;
}






void mm_free(void *bp){
	size_t size = GET_SIZE(HDRP(bp));
	PUT(HDRP(bp), PACK(size, 0));
	PUT(FTRP(bp), PACK(size, 0));
	coalesce(bp);
}

