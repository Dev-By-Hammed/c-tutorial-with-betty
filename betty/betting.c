#include <stdio.h>
/**
 *main - prints collect and prints out user datails
 *Return: Return 0
 */
int main(void)
{
	int age;
	printf("Enter Your Age Here\n");
	scanf("%d", &age);
	if (age >=18)
	{
		printf("you are liable to be here\n");
	}
	else if (age >= 0 && age < 18)
	{
		printf("invalid age\n or reference the guide page\n");
	}
	else if (age < 0)
	{
		printf("invalid input");

	}
	else
	{
		printf("age box can't be empty");
	}
	return (0);





}
