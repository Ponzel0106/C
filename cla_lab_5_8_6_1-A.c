#include <stdio.h>

struct person
{
    char* firstName;
    char* lastName;
};

int main(void) 
{
	struct person ms = {"Mary", "Smith"};
	struct person jj = {"James", "Johnson"};
	struct person pw = {"Patricia", "Williams"};
	struct person jb = {"John", "Brown"};
	printf("%s %s\n", ms.firstName, ms.lastName);
	printf("%s %s\n", jj.firstName, jj.lastName);
	printf("%s %s\n", pw.firstName, pw.lastName);
	printf("%s %s\n", jb.firstName, jb.lastName);
	return 0;
}