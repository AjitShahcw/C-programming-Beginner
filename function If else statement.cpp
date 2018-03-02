#include<stdio.h>
#include<conio.h>
int greater(int,int);
int main()
{
	int a,b,c,d,e,f;
	printf("\n enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\n greater number is:%d", greater(a,b));
	printf("\n enter two numbers:");
	scanf("%d%d",&c,&d);
	printf("\n greater number is:%d",greater(c,d));
	printf("\n enter two numbers:");
	scanf("%d%d",&e,&f);
	printf("\n greater number is:%d",greater(e,f));
}
int greater(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}
