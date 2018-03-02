#include<stdio.h>
int sum();
int main()
{
   	sum();
}
int sum()
{
	int a, b, c;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d", c);
}
