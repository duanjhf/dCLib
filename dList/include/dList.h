/*
 * dList.h
 * Description: dList.h
 * Author: duan. Created on: Mar 3, 2018
 * copyright(c)2018. LICENSE("GPL/BSD")
 */

#ifndef INCLUDE_DLIST_H_
#define INCLUDE_DLIST_H_

#include "dCommon.h"

/*************************************************************************************************/
/*                                   define                                                      */
/*************************************************************************************************/
struct dList
{
	void *data;
	struct dList *next;
};

/*************************************************************************************************/
/*                                   public function                                             */
/*************************************************************************************************/
struct dList *dList_insert(struct dList *prev_list, struct dList *new_list);
struct dList *dList_add(struct dList *head_list, struct dList *new_list);

#endif /* INCLUDE_DLIST_H_ */
