#include<stdio.h>
#include<string.h>
int main()
{
	char an[100];
	printf("Enter a string to reverse\n");
	scanf("%s",an);
	strrev(an);
	printf("reverse of entered string is: %s\n",an);
}
