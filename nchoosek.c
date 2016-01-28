/*

This is a program for calculate the number of combinations of sets while fixing
a number of k subsets


In other words, its a calculator for n choose k

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int input1 = 0;
int input2 = 0;
int n, k;

printf("Enter the size of the set, n : \n");
scanf("%d",&input1);


printf("Enter the number of subsets, k : \n");
scanf("%d",&input2);

//find n and k
n = factorialIt(input1);
k = factorialIt(input2);


printf("1:%d\n",n);
printf("2:%d\n",k);

printf("Answer: %d \n ", nchoosek(input1,input2) );



}


//n choose k

int nchoosek(int en, int kay)
{

int result = 0;

result =( factorialIt(en) / (factorialIt(kay)*factorialIt(en-kay)));

return result;
}

//Iterative Factorial

int factorialIt(int f)
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

