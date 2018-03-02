#include<stdio.h>
long factorial(int);
int main()
{
	int n;
	long fact=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("%d!=%ld\n",n,factorial(n));
	return 0;
}
long factorial(int n)
{
	int c;
	long result=1;
	for(c=1;c<=n;c++)
	result=result*c;
	return(result);
}

