/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int c1 = 0, c2 = 0, c3 = 0;
	struct node *iterator = (struct node*)malloc(sizeof(struct node));
	iterator = head;
	while (iterator!=NULL)
	{
		if (iterator->data == 0)
		{
			c1++;
		}
		else if (iterator->data == 1)
		{
			c2++;
		}
		else if (iterator->data == 2)
		{
			c3++;
		}
		iterator = iterator->next;
	}
	iterator = head;
	int i = c1+c2+c3;
	while (i >0)
	{
		if (c1>0)
		{
			iterator->data = 0;
			iterator = iterator->next;
			c1--;
		}
		else if (c2>0)
		{
			iterator->data = 1;
			iterator = iterator->next;
			c2--;


		}
		else if (c3>0)
		{
			iterator->data = 2;
			iterator = iterator->next;
			c3--;
		}
		i--;
	}
	
	
}