// Recursive function C program
// Harihar Tiple 
// Date : 02 Dec 2013

#include<stdio.h>
#include<stdlib.h>

int sumOfN(int n);
int main()
{
	int n,m;
	m=4;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("The memory address of entered number is %p\n",&n);
	printf("The memory address of m is  %p\n",&m);
	printf("The memory address of m is  %p\n",&main);

	printf("Sum of the number is ..%d\n", sumOfN(n));
	return EXIT_SUCCESS;

}

int sumOfN(int n){
	int sum;
	if(n==0)
	{
		sum=0;
	}else{
	sum = n + sumOfN(n - 1);
	}
	return sum;
}
