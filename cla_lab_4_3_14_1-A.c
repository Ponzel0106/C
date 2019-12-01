#include <stdio.h>
#include <stdbool.h>

int main()
{
	float  numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9}, temp;
	bool  swapped;
	int  countUnsorted = 10;
	do
	{
	    swapped = false;
	    for (int i = 1; i < countUnsorted; ++i)
				if (numbers[i - 1] < numbers[i])
				{
					swapped = true;
					temp = numbers[i - 1];
					numbers[i - 1] = numbers[i];
					numbers[i] = temp;
				}
	    --countUnsorted;
			for (int i = 0; i < 10; ++i)
				printf("%.2f ", numbers[i]);
			printf("\n");
	} while(swapped);
	return 0;
}