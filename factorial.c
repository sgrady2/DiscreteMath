#include <stdio.h>
#include <stdlib.h>

int main()
{

int input;
int input2;

printf("Enter a number for recursive factorial \n");
scanf("%d",&input);
printf("%d \n", factorial(input));
printf("Enter a number for iterative factorial \n");

scanf("%d",&input2);
printf("%d \n", factorialit(input2));

}

//This is the recursive version of factorial
//It is inefficient because everytime we call
//the recursive function (f times), we have to
//place each function call on the stack and return from it

int factorial(int f)
{
if (f == 0)
	return 1;


return f*factorial(f-1);
}

//Iterative Factorial

int factorialit(int f)
{
//factorial of zero is 1
int result = 1;
int i=0;
for (i=1;i<f+1;i++)
{
	result*=i;

}


return result;
}
