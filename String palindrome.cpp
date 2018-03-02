#include<stdio.h>
#include<string.h>
int main()
{
	char s1[25];
	int i, int j, int n, int flag = 0;
	printf("Enter the string to check palindrome\n");
    scanf("%d",s1);
	n = strlen(s1);
	i = 0;
	j = n-1;
	while(i<j)
	{
		if(s1[i]==s1[j])
		{
			flag = i;
		}
		else
		{
			flag = 0;
		}
		if(flag==1)
		{
			i++;
			j++
		}
		else
		break;
	}
	printf("(flag == 1)" "palindrome\n",not palindrome");
	return 0;
}
