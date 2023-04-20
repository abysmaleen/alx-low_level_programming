#include <strio.h>
/**
 * main - a program that prints the size of various comp types
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(0)\n",(unsignedlong)sizeof(a));
printf("Size of an int: %lu byte(0)\n",(unsignedlong)sizeof(b));
printf("Size of a long int: %lu byte(0)\n",(unsignedlong)sizeof(c));
printf("Size of a long long int: %lu byte(0)\n",(unsignedlong)sizeof(d));
printf("Size of a float: %lu byte(0)\n",(unsignedlong)sizeof(f));
return (0);
}
