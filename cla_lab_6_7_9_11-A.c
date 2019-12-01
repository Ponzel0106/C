#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		printf("You must supply 3 arguments\n");
		return 0;
	}
	int a = atoi(argv[2]), b = atoi(argv[3]), res;
	if (strcmp(argv[1], "add") == 0)
		res = a + b;
	else if (strcmp(argv[1], "sub") == 0)
		res = a - b;
	else if (strcmp(argv[1], "mul") == 0)
		res = a * b;
	else
	{
		printf("Operation should be either 'add', 'sub' or 'mul'\n");
		return 0;
	}
	printf("%s %d %d: %d\n", argv[1], a, b, res);
	return 0;
}