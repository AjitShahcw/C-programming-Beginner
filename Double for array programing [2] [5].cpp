#include<stdio.h>
int main()
{
	int r, c;
	int array[2][5]={{1, 2, 3, 4, 0},{4, 3, 2, 1, 0}};
	                 for(r=0; r<=1; r++)
	                 {
	                 	for(c=0; c<=4; c++)
	                 	{
	                    	printf("%d", array[r][c]);
	                    }
	                    printf("\n");
	                 }
	                 
}
