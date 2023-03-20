#include <stdio.h>

/**
  *main - collect and display user input
  *Return: Return 0
  */
int main(void)
{
	char grade;
	printf("Enter you grade here for techer's remark");
	scanf("%c", &grade);

	switch (grade)
	{	
	case 'A':
		printf("you are an excellent student");
		break;
	case 'B':
		printf("good grade");
		break;
	case 'C':
		printf("good job");
		break;
	default:
		printf("no such grade here");
	}


	return (0);
}
