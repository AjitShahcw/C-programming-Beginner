#include<stdio.h>
int main()
{
	int r, c;
	int array[4][4]={{1, 2, 3, 4},{4, 3, 2, 1},{5, 6, 7, 8},{8, 7, 6, 5}};
	                 for(r=0; r<=3; r++)
	                 {
	                 	for(c=0; c<=3; c++)
	                 	{
	                 	printf("%d", array[r][c]);
	                    }
	                    printf("\n");
	                 }
	                 
}
