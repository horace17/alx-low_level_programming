#include <stdio.h>
/**
 * main - main function
 * Great
 * Return: end program
 */

int main(void)
{

	char low;
	char UP;

	for (low = 'a'; low <= 'z'; ++low)
		printf("%c", low);

	for (UP = 'A'; UP <= 'Z'; ++UP)
		printf("%c", UP);

	printf("\n");
	return (0);
}
