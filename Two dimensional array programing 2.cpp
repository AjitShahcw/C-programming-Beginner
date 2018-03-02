#include<stdio.h>
int main()
{
	int r, c;
	int array[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},
	                  {9, 10, 11, 12},{14, 15, 16, 17}};
	for(r=0; r<=3; r++)
	{
		for(c=0; c<=3; c++)
		{
			printf("%d", array[r][c]);
		}
		printf("\n");
	}
}
