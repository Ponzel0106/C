#include <stdio.h>

int main()
{
	int localhostOctet1 = 127;
	int localhostOctet2 = 0;
	int localhostOctet3 = 0;
	int localhostOctet4 = 1;

	printf("Localhost IP is %d.%d.%d.%d\n",
			localhostOctet1, localhostOctet2, localhostOctet3, localhostOctet4);
}