#include <stdio.h>
#include <stdlib.h>

struct DateOfBirth {
	unsigned int day : 5;
	unsigned int month : 4;
	unsigned int year : 15;
};

int main(int argc, char **argv) {
	struct DateOfBirth date;
	date.day = 17;
	date.month = 3;
	date.year = 2002;

	printf("Date of birth is: %d.%d.%d", date.day, date.month, date.year);

	return 0;
}
