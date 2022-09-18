#include <stdio.h>
/**
 * main - Prints alphabets in lowercase, then in upperces 
 * Return: 0
 **/

int main(void)
{
	char 1_lower;
	char u_letter;

	for (1_letter = 97; 1_letter <= 122; 1_letter++)
	{
		putchar(1_letter);
	}
	for (u_letter = 'A'; u_letter <= 'z'; u_letter++)
	{
		putchar(u_letter);
	}
	putchar('\n');

	return (0);
}
