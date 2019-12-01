#include <stdio.h>

float sq(float x);

int main()
{
    float arr[] = {2., 6., 2.5, 12.12, 345.68, 50.};
    for (int i = 0; i < 6; ++i)
	    printf("square of %.2f = %.2f\n", arr[i], sq(arr[i]));
	return 0;
}

float sq(float x)
{
    return x*x;
}