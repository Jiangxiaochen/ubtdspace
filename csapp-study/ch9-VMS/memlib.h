/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-22 14:52:26
 * @Description: study for csapp ch9-vms/malloc 
 */
#ifndef _MEMLIB_H_
#define _MEMLIB_H_

#define MAX_HEAP (20*(1<<20)) //20MB

/**
 * initialize the memory system model
 */
void mem_init(void);

/**
 * simple model of the sbrk function.	
 * @param  int [num of bytes]
 * @return     [start address of the new area]
 */
void *mem_sbrk(int);



#endif