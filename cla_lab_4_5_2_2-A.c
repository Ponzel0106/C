#include <stdio.h>

int main(void) 
{
	char octets[4][4], ip[16];
	for(int i = 0; i < 4; ++i)
	    scanf("%s", octets[i]);
	sprintf(ip, "%s.%s.%s.%s", octets[0], octets[1], octets[2], octets[3]);
	printf("%s\n", ip);
	return 0;
}