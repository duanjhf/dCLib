/*
 * dQueue.h
 * Description: dQueue.h
 * Author: duan. Created on: Mar 7, 2018
 * copyright(c)2018. LICENSE("GPL/BSD")
 */

#ifndef INCLUDE_DQUEUE_H_
#define INCLUDE_DQUEUE_H_

#include "dCommon.h"

/*************************************************************************************************/
/*                                   define                                                      */
/*************************************************************************************************/
#define DQUEUE_NAME_MAX_LEN (32)

struct dQueue
{
	char name[DQUEUE_NAME_MAX_LEN];
	uint32 head_idx;
	uint32 tail_idx;
	uint32 elem_size;
	uint32 elem_cnt;
	void *queue;
};

/*************************************************************************************************/
/*                                   public function                                             */
/*************************************************************************************************/
struct dQueue *dQueue_create()


#endif /* INCLUDE_DQUEUE_H_ */
