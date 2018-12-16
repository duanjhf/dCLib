/*
 * dList.c
 * Description: dList.c
 * Author: duan. Created on: Mar 18, 2018
 * copyright(c)2018. LICENSE("GPL/BSD")
 */

#include "dList.h"

/*************************************************************************************************/
/*                                   public function                                             */
/*************************************************************************************************/
struct dList *dList_insert(struct dList *prev_list, struct dList *new_list)
{
	struct dList *tmp_list = NULL;

	if (NULL == prev_list || NULL == new_list) {
		dError("prev/new list is NULL.");
		return NULL;
	}

	tmp_list = prev_list->next;
	prev_list->next = new_list;
	new_list->next = tmp_list;
	return new_list;
}

struct dList *dList_add(struct dList *head_list, struct dList *new_list)
{
	struct dList *tmp_list = NULL;

	if (NULL == head_list || NULL == new_list) {
		dError("head/new list is NULL.");
		return NULL;
	}


}
