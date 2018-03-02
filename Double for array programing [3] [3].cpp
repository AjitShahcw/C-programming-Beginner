#include<stdio.h>
int main()
{
	int r, c;
	int array[3][3]={{1, 2, 3, },{3, 2, 1},{5, 6, 7}};
	                 for(r=0; r<=2; r++)
	                 {
	                 	for(c=0; c<=2; c++)
	                 	{
	                    	printf("%d", array[r][c]);
	                    }
	                    printf("\n");
	                 }
	                 
}
