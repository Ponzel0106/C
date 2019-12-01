#include <stdio.h>

int main(void) 
{
	int n, days = 0;
	scanf("%d", &n);
	switch(n)
	{
		case 12: days += 30;
		case 11: days += 31;
		case 10: days += 30;
		case 9: days += 31;
		case 8: days += 31;
		case 7: days += 30;
		case 6: days += 31;
		case 5: days += 30;
		case 4: days += 31;
		case 3: days += 29;
		case 2: days += 31;
		case 1:
		    printf("There are %d days before the given month.\n", days);
		    break;
		default:
		    printf("Error: no such month in my calendar.");
	}
	return 0;
}