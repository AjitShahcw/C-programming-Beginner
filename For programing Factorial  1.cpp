#include<stdio.h>
int main()
{
	int n, first=1, second=1, next, c;
	printf("Enter a number of term\n");
	scanf("%d",&n);
	printf("fint %d term of factorial series\n",n);
	for(c=1; c<n; c++)
	{
		if(c<=1)
		next=c;
		else
	next=first+second;
	first=second;
	}second=next;
{
	printf("%d\n",next);
}
}
