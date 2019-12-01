#include <stdio.h>

int main()
{
	int n, line = 0;
	scanf("%d ", &n);
	if (n > 20)
		n = 20;
	do
	{
	    int cur = ++line;
	    do
	        printf("*#");
	    while( --cur );
	    printf("\n");
	} while( --n > 0 );
	return 0;
}