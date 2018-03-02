#include<stdio.h>
int main()
{
	int i, j, n=4, temp, min;
	int a[4] = {4, 2, 3, 1};
	for(i=0; i<=n-1; i++)
	{
		min=i;
		for(j=i+1; j<=n; j++)
		{
			if(a[j] <a[min])
			min=j;
		}
			temp =a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	
	for(i=0;i<n;i++)

{
		printf("%d", a[i]);
}

	
}
