#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 100; d++)
		{
			putchar(d + '0');
			if (d < 99)
				{
					putchar(',');
					putchar(' ');
					}
			}
	putchar('\n');
	return (0);
}
