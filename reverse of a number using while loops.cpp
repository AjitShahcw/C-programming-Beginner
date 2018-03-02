#include<stdio.h>
int main()
{
int num, r, reverse=0;
printf("Enter ant number:");
scanf("%d",&num);
while(num)
{
	r=num%10;
	reverse=reverse*10+r;
	num=num/10;
}
printf("Reverse of number:%d",reverse);
return 0;
}
