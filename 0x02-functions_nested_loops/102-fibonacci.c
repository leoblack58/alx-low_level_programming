#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int count = 3;/*My loop will begin from the 3rd one*/

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		/*close with new line if at end of list*/

		if (count == 50)
		{
		printf("%lu \n", next);
		}
		else /* add comma after the number*/
		{
		printf("%lu, ", next);
		}

	/* Reset the variables to get the next number */
	first = second;
	second = next;

	/* after resetting the variables, you need to find the next number */
	next = first + second;
	count++;
	}

	return (0);
}

