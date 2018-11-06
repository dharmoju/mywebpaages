/*write a program to print the prime between to numbers using a function concept*/
#include<stdio.h>
#include<math.h>
int prime(int n,int m);
int primes(int n);
int main(void)
{
	int num1,num2;
	printf("enter the vaule of the numbers are");
	scanf("%d%d",&num1,&num2);
//	printf(" prime numbers between %d  to %d\n",num1,num2);
	prime(num1,num2);
	printf("%d",i);
	return 0;
}
int prime(int n,int m)
{
	int i;
	for(i=n;i<m;i++)
	if(primes(i))
		printf("%d",i);
			if(i%10==3)
//				printf("%d",i);


		}
int primes(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			for(i=2;n%i==3;i++)
				return i;
		if(i>sqrt(n))
	return i;
//	return 1;
}
