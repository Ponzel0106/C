#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n > 20)
	     printf("Matrix too big.");
	int** mat = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; ++i)
	{
			mat[i] = malloc(n * sizeof(int));
			for (int j = 0; j < n; ++j)
				mat[i][j] = (i + 1) * (j + 1);
	}
	printf("    ");
	for (int i = 0; i < n; ++i)
	     printf("%4d", i + 1);
	printf("\n");
	for (int i = 0; i < n; ++i)
	{
			printf("%4d", i + 1);
			for (int j = 0; j < n; ++j)
				printf("%4d", (i + 1) * (j + 1));
			printf("\n");
	}
	for (int i = 0; i < n; ++i)
	    free(mat[i]);
	free(mat);
	return 0;
}