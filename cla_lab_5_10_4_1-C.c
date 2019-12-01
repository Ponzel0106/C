#include <stdio.h>
#include <stdlib.h>

struct element
{
	int value;
	struct element *next;
};

int main(void)
{
	int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
	struct element *q = malloc(sizeof(struct element)), *cur = q, *temp;
	for (int i = 0; i < 9; ++i, cur = cur->next)
	    cur->value = values[i], cur->next = malloc(sizeof(struct element));
	cur->value = values[9];
	cur->next = NULL;
	
	printf(" First 5 values:\n");
	cur = q;
	for (int i = 0; i < 5; ++i, cur = cur->next)
	    printf("%d\n", cur->value);
	printf(" First 7 values:\n");
	cur = q;
	for (int i = 0; i < 7; ++i, cur = cur->next)
	    printf("%d\n", cur->value);
	    
	for (cur = q; cur != NULL; cur = temp)
	{
	    temp = cur->next;
	    free(cur);
	}
	printf(" Memory is freed");
	return 0;
}