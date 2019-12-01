#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("H nibble: %d\n", n >> 4);
	printf("L nibble: %d\n", n & 0xf);
	return 0;
}