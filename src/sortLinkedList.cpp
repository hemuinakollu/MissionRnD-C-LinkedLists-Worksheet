/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head != NULL){
		int min = 0;
		struct node *iterator1 = (struct node*)malloc(sizeof(struct node));
		struct node *iterator2 = (struct node*)malloc(sizeof(struct node));
		struct node *temp = (struct node*)malloc(sizeof(struct node));

		iterator1 = head;
		if (iterator1->next == NULL)
			return head;
		int c = 0;
		while (iterator1->next != NULL)
		{
			c = 0;
			iterator2 = iterator1->next;
			min = iterator1->num;
			while (iterator2 != NULL)
			{
				if (iterator2->num < min)
				{
					min = iterator2->num;
					temp = iterator2;
					c = -1;
				}
				iterator2 = iterator2->next;

			}
			if (c == -1){
				iterator1->num = iterator1->num + temp->num;
				temp->num = iterator1->num - temp->num;
				iterator1->num = iterator1->num - temp->num;
			}
			iterator1 = iterator1->next;


		}
		return head;
	}
	return NULL;
}