#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("Please enter your age and gender\n");
	scanf("%d %c", &a,&b);
	printf("%d %c", a,b);
	if(b == 'M' && a>=21)
	printf("Elegible for marrige\n");
    else if(b == 'F' && a>=18)
	printf("Elegible for marrige\n");
    else
	printf("Not elegible for marrige\n");
}
