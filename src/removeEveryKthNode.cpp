/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *iterator = (struct node*)malloc(sizeof(struct node));
	struct node *prev = (struct node*)malloc(sizeof(struct node));
	

	iterator = head;
	int l = 0;

	if (head != NULL && K > 0)
	{
		if (K == 1)
			return NULL;
		while (iterator != NULL)
		{
			l = 1;
			while (l <= K - 1 && iterator != NULL)
			{
				prev = iterator;
				iterator = iterator->next;
				l++;
			}
			if (iterator == NULL)
				return head;
			if (l>K - 1)
			{
				prev->next = iterator->next;
			}

			iterator = iterator->next;
		}
		return head;

	}
	else
	{
		return NULL;
	}

}