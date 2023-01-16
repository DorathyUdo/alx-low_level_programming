#include <stdio.h>

/**
 * main - printts the alphabet in lower case,
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
