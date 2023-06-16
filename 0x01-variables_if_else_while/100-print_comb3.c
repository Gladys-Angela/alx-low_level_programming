#include <stdio.h>

/**
 * main- Prints all possible different combinations of two digits.
 * Return: Always 0 (success)
 */

main(void)
{
	int i_a;
	int i_b;

	for (i_a = 0; i_a < 9; i_a++)
	{
		for (i_b = i_a + 1; i_b < 10; i_b++)
		{
			putchar(i_a + '0');
			putchar(i_b + '0');

			if (i_a == 8 && i_b == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}


