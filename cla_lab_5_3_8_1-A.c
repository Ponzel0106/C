#include <stdio.h>

int main()
{
	char str[8][9] = {0};
	str[0][0] = str[0][7] = str[7][0] = str[7][7] = 'R';
	str[0][1] = str[0][6] = str[7][1] = str[7][6] = 'N';
	str[0][2] = str[0][5] = str[7][2] = str[7][5] = 'B';
	str[0][3] = str[7][3] = 'Q';
	str[0][4] = str[7][4] = 'K';
	for (int i = 2; i < 6; ++i)
	    for (int j = 0; j < 8; ++j)
	        str[i][j] = ' ';
	for (int j = 0; j < 8; ++j)
	    str[1][j] = str[6][j] = 'P';
	for (int i = 0; i < 8; ++i)
	    printf("%s\n", str[i]);
	return 0;
}