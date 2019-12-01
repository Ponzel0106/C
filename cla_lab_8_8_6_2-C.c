#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ONE 1
#define TWO 2
#define THREE 3
#define IP_PART_COUNT 4
#define MAX_IP_OCTET 255
#define TEST_CASES_COUNT 9
#define TEST_CASES { "127.0.0.1", "127.0.01", "127.0..1",\
"127.zero.0.1", "127.297.0.1", "127.2555.0.1", "0.0.0.0",\
"9999999999.99999999999.999999999999.999999999999", "-1.244.-24.2" }
#define EMPTY_STRING ""
#define NOT "not "
#define IP_FORMAT "%3u.%3u.%3u.%3u"
#define MESSAGE "%s is %sa valid IP address\n"

int main()
{
		char* arr[TEST_CASES_COUNT] = TEST_CASES;
		for (int i = NULL; i < TEST_CASES_COUNT; ++i)
			printf(MESSAGE, arr[i], isIP(arr[i]) ? EMPTY_STRING : NOT);
		return NULL;
}

int isIP(char* str)
{
		unsigned int ip[IP_PART_COUNT];
		if (sscanf(str, IP_FORMAT, ip, ip + ONE, ip + TWO, ip + THREE) != IP_PART_COUNT)
			return NULL;
		for (int i = NULL; i < IP_PART_COUNT; ++i)
			if (ip[i] > MAX_IP_OCTET)
				return NULL;
		return ONE;
}