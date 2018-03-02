#include<stdio.h>
int exchange(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}

int main()
{
	int a,b;
	a=10,b=20;
	exchange(&a,&b);
	printf("a=%d and b=%d\n",a,b);
}
