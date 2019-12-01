#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (!(0 <= n && n < 7))
	{
	    printf("Error, no such day.\n");
	    return 0;
	}
	char* days[7] = {"Sunday", "Monday", "Tuesday",
	           "Wednesday", "Thursday", "Friday", "Saturday"};
	printf("Pointer version: %s\n", *(days + n));
	printf("Array index version: %s\n", days[n]);
	return 0;
}