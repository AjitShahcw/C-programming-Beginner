#include<stdio.h>
int sum();
int main()
{
	int c;
	c=sum();
	printf("%d", c);
}
int sum()
{
	int a, b, c;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
    return c;
}
