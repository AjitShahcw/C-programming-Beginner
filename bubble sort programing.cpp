#include<stdio.h>
int main()
{
	int n = 4, i, j, temp=0;
	int a[4]={4, 2, 3, 1};
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
		   if (a[j] >= a[j+1])
		{ 
		  temp = a[j];
		  a[j] = a[j+1];
		  a[j+1] = temp;
		}
      }
	}
		for(i=0; i<n; i++)

	
		printf("%d\n", a[i]);
	
}
