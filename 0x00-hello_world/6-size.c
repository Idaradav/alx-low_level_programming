#include <stdio.h>

/**
 * main - size
 * Description: using the main function
 * prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte (s)\n", sizeof(c));
	printf("size of an int: %ld byte (s)\n", sizeof(i));
	printf("size of a long int: %ld byte (s)\n", sizeof(li));
	printf("size of a long long int: %ld byte (s)\n", sizeof(lli));
	printf("size of a float: %ld byte (s)\n", sizeof(f));
	return (0);
}
