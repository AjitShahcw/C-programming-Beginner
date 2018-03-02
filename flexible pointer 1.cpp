#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    int *p;
    p=&a;
    printf("%u\n",a);
   p=&b;
  printf("%u\n",b);
    p=&c;
    printf("%u\n",c);
}
