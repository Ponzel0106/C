#include <stdio.h>
#include <stdlib.h>

int comp(int n, int** m1, int** m2);
void printComp(int n, int** m1, int** m2);

int main()
{
	int** mats[3];
	for (int c = 0; c < 3; ++c)
	{
	    mats[c] = malloc(3 * sizeof(int*));
	    for (int i = 0; i < 3; ++i)
	    {
	        mats[c][i] = malloc(3 * sizeof(int));
	        for (int j = 0; j < 3; ++j)
	            if (c == 2)
	                mats[c][i][j] = j * 3 + i;
	            else
	                mats[c][i][j] = i * 3 + j;
	    }
	}
	for (int c1 = 0; c1 < 3; ++c1)
	    for (int c2 = 0; c2 < 3; ++c2)
	        if (c1 != c2)
	            printComp(3, mats[c1], mats[c2]);
	for (int c = 0; c < 3; ++c)
	{
	    for (int i = 0; i < 3; ++i)
	        free(mats[c][i]);
	    free(mats[c]);
	}
	return 0;
}

int comp(int n, int** m1, int** m2)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (m1[i][j] < m2[i][j])
                return -1;
            else if (m1[i][j] > m2[i][j])
                return 1;
    return 0;
}

void printComp(int n, int** m1, int** m2)
{
    int res = comp(n, m1, m2);
    if (res == 0)
        printf("Both matrices are equal.\n");
    else if (res == -1)
        printf("matrixA is smaller than matrixB\n");
    else if (res == 1)
        printf("matrixA is greater than matrixB\n");
}