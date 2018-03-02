#include<stdio.h>
int main()
{
    int a,b,sum;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    printf("Enter the two number");
    scanf("%u%u",&a,&b);
    sum=*pa+*pb;
    printf("sum=%u\n",sum);
}
