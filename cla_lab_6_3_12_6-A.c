#include <stdio.h>

int stringCompare(char * a, char * b)
{
	int i;
	for (i=0; a[i] != 0 && b[i] != 0; i++)
	{
		if (a[i] > b[i])
			return 1;
		else if (a[i] < b[i])
			return -1;
	}
	if (a[i] == 0)
	{
		if (b[i] == 0)
			return 0;
		else
			return -1;
	}
	else
		return 1;
}

int main(void)
{
	int result1 = stringCompare("AAA", "BBB");
	int result2 = stringCompare("AAC", "AAB");
	int result3 = stringCompare("AAC", "AAC");
	int result4 = stringCompare("AAC", "AACC");
	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	printf("result4: %d\n", result4);
	return 0;
}