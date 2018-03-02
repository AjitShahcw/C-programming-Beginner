#include<stdio.h>
float calculate_area(int);
int main()
{
	int radius;
	float area;
	printf("Enter the radius of circle:\n");
	scanf("%d",&radius);
	area=calculate_area(radius);
	printf("area of circle:%f\n",area);
	return(0);
}
    float calculate_area(int radius)
{
float areaofcircle;
areaofcircle=3.14*radius*radius;
return(areaofcircle);
}

