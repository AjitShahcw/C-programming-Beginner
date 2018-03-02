#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[8] = "RAMA";
	strncpy(s1,s2,sizeof(s1));
}
