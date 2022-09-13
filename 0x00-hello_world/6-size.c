#include <stdio.h>

/**
 * main - print
 *
 * Description: using the main function
 * this program prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	char d;
	int x;
	long int c;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(d));
	printf("Size of an int: %ld byte(s)\n", sizeof(x));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}	
