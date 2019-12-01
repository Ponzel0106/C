#include <stdio.h>

int main()
{
	char names[20][4];
	for (int i = 0; i < 4; ++i)
	    scanf("%s", names[i]);
	for (int i = 3; i >= 0; --i)
	    printf("%s\n", names[i]);
	return 0;
}