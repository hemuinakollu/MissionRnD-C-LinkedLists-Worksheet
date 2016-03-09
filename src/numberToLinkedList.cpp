/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head = NULL;
	if (N < 0)
		N = (-1) * N;
	
	
		
		do
		{
			struct node *n = (struct node*)malloc(sizeof(struct node));
			n->num = N % 10;
			n->next = NULL;
			if (head == NULL)
				head = n;
			else{
				n->next = head;
				head = n;
			}
			N = N / 10;
		} while (N > 0);
		return head;
	
	
	
}