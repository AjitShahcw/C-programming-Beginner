#include<stdio.h>
int main()
{
	int a;
	printf("Please enter your age\n");
	scanf("%d", &a);
	printf("%d", a);
	if(a>=25)
	printf("Elegible to contest and vote\n");
    else if(a>=18 && a<25)
	printf("Elegible to vote only\n");
    else
	printf("Neither to vote nor contest in election\n");
}
