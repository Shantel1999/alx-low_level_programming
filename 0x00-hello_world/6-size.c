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
	float t;

	printf("Size of char: %d bytes(s)\n", sizeof(d));
	printf("Size of int: %d bytes(s)\n", sizeof(x));
	printf("Size of long int: %d bytes(s)\n", sizeof(c));
	printf("Size of long long: %d bytes(s)\n", sizeof(lli));
	printf("Size of float: %d bytes(s)\n", sizeof(t));
	return (0);
}	
