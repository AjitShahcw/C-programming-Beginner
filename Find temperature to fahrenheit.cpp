#include<stdio.h>
int main()
{
	float fh,cl;
	printf("Enter the temperature value value in fahrenheit\n");
	scanf("%f",&fh);
	cl=5*(fh-32)/9;
	printf("converted celsius value:%f",cl);
}
