#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m;
	scanf("%d", &n);
	if (n >= 1024*1024)
	{
	    printf(" Too much memory requested ");
	    return 0;
	}
	char* arr = (char*)malloc(n);
	for (int i = 0; i < n; ++i)
	     arr[i] = 'A' + (i % 26);
	m = (n <= 400 ? n : 400);
	for (int i = 0; i < m; i += 40)
	     printf("%.*s\n", (m - i <= 40 ? m - i : 40), arr + i);
	free(arr);
	return 0;
}