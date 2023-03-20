#include <stdio.h>
/**
 *main - take user input and loop through it
 *Return: Return 0
 */
int main(void)
{
	for (int i = 0; i <= 10; i++)
	{
		printf("start of outer loop %d\n", i);
		for (int j = 0; j <= 5; j++)
		{
			printf("inner loop %d", j);
		printf("end of outer loop %d\n", i);

		}
	}

	return (0);
}
