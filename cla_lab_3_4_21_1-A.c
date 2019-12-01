#include <stdio.h>

int main()
{
	int n, spaces;
	scanf("%d", &n);
	if (n <= -1)
	    return 0;
	if (n > 20)
	    n = 20;
	for (int i = 0; i < 2*n; ++i)
	{
	    if (i < n)
	        spaces = i;
	    else
	        spaces = 2*n - 1 - i;
	    printf("*");
	    while (spaces--)
	        printf(" ");
	    printf("*\n");
	}
	return 0;
}