// Finding area of circle
#include<stdio.h>
#define PI 3.14 // to define fix value or constant/
void main(){
	float r,area;
	printf("Enter the radius of Circle: ");
	scanf("%f",&r);
	area = PI * r * r;
	printf("Area of Circle is %.2f",area);
}
