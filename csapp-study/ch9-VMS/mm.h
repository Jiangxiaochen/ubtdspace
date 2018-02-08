/**
 * @Author:      xiaochen.jiang
 * @Email:       1370035324@qq.com
 * @DateTime:    2018-01-22 15:14:26
 * @Description: 
 * 第一个字是一个双字边界对齐的不使用的填充字。
 * 后面紧跟一个特殊的序言块(8字节，一个头部+一个脚部)。
 * 堆以一个结尾块结束(只有一个头部)。
 */

#ifndef _MM_H_
#define _MM_H_
#include <sys/types.h>
/**
 * 初始化分配器
 * @return  0，-1
 */
int mm_init(void);
/**
 * malloc
 * @param  size [description]
 * @return      [description]
 */
void *mm_malloc(size_t size);

void mm_free(void *ptr);



#endif