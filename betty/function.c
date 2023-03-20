 #include <stdio.h>
#define ops 4
/**
 *Retur: 0
 *main - return result
 *mathematical -  functions
 *Sum - add
 *Sub - subtract
 *Mult - multiply
 *Div -  divide
 */
float sum(float num1, float num2) {return (num1 + num2); }
float sub(float num1, float num2) {return (num1 - num2); }
float mult(float num1, float num2) {return (num1 * num2); }
float div(float num1, float num2) {return (num1 / num2); }

/*the main function*/
int main(void)
{
	float (*ptr_func[ops]) (float, float) = {sum, sub, mult, div};
	int choice;
	float num1, num2;

	printf("Enter your choice : 0 for sum, 1 for sub, 2 for mult, 3 for div\n");
	scanf("%d", &choice);

	printf("Enter two numbers : \n");
	scanf("%f %f", &num1, &num2);

	printf("The Result is : %f", ptr_func[choice] (num1, num2));
	return (0);
}
