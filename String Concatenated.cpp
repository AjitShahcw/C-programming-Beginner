#include<stdio.h>
#include<string.h>
int my_strcat(char s1[],char s2[])
int main()
{
	char s1[15] = "RAMA";
	char s2[] = "KRISHNA";
	my_strcat(s1,s2);
	printf("Concatenated string = %d\n",s1);
}
