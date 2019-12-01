#include <stdio.h>
#include <stdlib.h>

int isIP(char* str);

int main()
{
	char* arr[9] = {"127.0.0.1", "127.0.01", "127.0..1",
	    "127.zero.0.1", "127.297.0.1", "127.2555.0.1", "0.0.0.0",
	    "9999999999.99999999999.999999999999.999999999999", "-1.244.-24.2"};
	for(int i = 0; i < 9; ++i)
	    printf("%s is %sa valid IP address\n", arr[i], isIP(arr[i]) ? "" : "not ");
	return 0;
}

int isIP(char* str)
{
    unsigned int ip[4];
    if (sscanf(str, "%3u.%3u.%3u.%3u", ip, ip+1, ip+2, ip+3) != 4)
        return 0;
    for (int i = 0; i < 4; ++i)
        if (ip[i] > 255)
            return 0;
    return 1;
}