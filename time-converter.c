/* counts the amount of digits in a number inputted by the user */

#include <stdio.h>

int main (void) {
	int hours, minutes;

	printf("Enter a 24-hour time: \n");
	scanf("%d :%d", &hours, &minutes);

	if (hours > 12)
		printf("Equivalent 12-hour: %02d:%02d", hours - 12, minutes);
	else
		printf("Equivalent 12-hour: %02d:%02d", hours, minutes);


	return 0;
}