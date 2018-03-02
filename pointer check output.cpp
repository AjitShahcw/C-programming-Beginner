#include<stdio.h>
int main()
{
    int a,b,c;
    int *p,*q,*r;
    a=8,b=4;
	p=&b;
    q=p,r=&c;
    p=&a;
	*q=10;
    *r=*p;
    *r=a+*q+*&c;
    printf("%u%u%u\n",a,b,c);
    printf("%u%u%u\n",*p,*q,*r);
}
