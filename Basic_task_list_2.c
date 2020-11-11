//Task 1a

#include<stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter three integers separated by a single space: \n");
	scanf("%d" "%d" "%d", &a, &b, &c);
	

	if (a >= b && a >= c)
	{
		printf("%d is the largest number. \n", a);
		return 0;
	}	
	else if (b >= a && b >= c)
	{
		printf("%d is the largest number. \n", b);
		return 0;
	}	
	else
	{
		printf("%d is the largest number. \n", c);
		return 0;
	} 
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 1b

#include<stdio.h>

int main()
{
	float a, b, sum ;
	printf("Enter two negative numbers separated by a single space: \n");
	scanf("%f" "%f", &a, &b);
	
	if (a < 0 && b < 0)
	{
		sum = a + b;
		printf("The sum of two negative numbers = %d", sum);
	}
	else
	{
		printf("Enter two negative numbers.");
		return 1;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 1c

#include<stdio.h>

int main()
{
	float a, b, sum ;
	printf("Enter two negative or two positive numbers separated by a single space: \n");
	scanf("%f" "%f", &a, &b);
	
	if (a < 0 && b < 0)
	{
		sum = a + b;
		printf("The sum of two negative numbers = %d \n", sum);
		return 0;
	}
	else if (a > 0 && b > 0)
	{
		sum = a + b;
		printf("The sum of two positive numbers = %d \n", sum);
		return 0;
	}
	else 
	{
		printf("Enter two numbers with the same characters. \n");
		return 1;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 2

#include<stdio.h>

int main()
{
	double a = 0;
	double b = 0;

	printf("Enter two numbers separated by a space a b: \n");
	scanf("%f" "%f", &a, &b);
	
	if (a > b)
	{
		printf("Number a = %f is greater than number b = %f.\n", a, b);
		return 0;
	}
	else if (a <b)
	{
		printf("Number b = %f is greater than number a = %f.\n", b, a);
		return 0;
	}
	else
	{
		printf("The numbers a = %f and b = %f are equal.\n", a, b);
		return 0;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 3

#include<stdio.h>

int main()
{
	float a, b;
	float x;
	printf("Enter value a: \n");
	scanf("%f", &a);

	printf("Enter value b: \n");
	scanf("%f", &b);
	
	if (a == 0 && b == 0)
	{
		printf("Infinitely many solutions.");
		return 0;
	}
	else if (a == 0 && b != 0)
	{
		printf("A conflicting equation.");
		return 0;
	}
		
	else
	{
		x = -1.0 * b / a;
		printf("I count root x = %f. \n", x);
		return 0;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 4

#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, delta;
	float x, x_0, x_1, x_2;
	printf("Enter value a: \n");
	scanf("%f", &a);

	printf("Enter value b: \n");
	scanf("%f", &b);

	printf("Enter value c: \n");
	scanf("%f", &c);

	if (a != 0)
		{
		delta = pow(b,2) - 4 * a * c;
		}
		if (delta > 0)
		{
			x_1 = (-b - sqrt(delta))/ (2 * a);
			x_2 = (-b + sqrt(delta))/ (2 * a);
			printf("The function has two zero positions x_1 = %f and x_2 = %f. \n", x_1, x_2);
			return 0;
		}
		else if (delta == 0)
		{
			x_0 = -b / (2 * a);
			printf("The function has one zero positions x_0 = %f. \n", x_0);
			return 0;
		}
		else
		{
			printf("The function has no zero position in the set od real numbers. \n");
			return 0;
			
		}
	return 0;

}
----------------------------------------------------------------------------------------------

//Task 5


