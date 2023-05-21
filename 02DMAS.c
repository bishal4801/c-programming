//Add,Subtact, Multiply & Divide
#include<stdio.h>
void main(){
int a,b,c,x,y;
float z;
printf("Enter First Number:");
scanf("%d",&a); // %d is used for integer. 
printf("Enter Second Number:");
scanf("%d",&b);
c=a+b;
x=a-b;
y=a*b;
z=a/b;
printf("Addition of a and b is %d\n",c);
printf("Subtraction of a and b is %d\n",x);
printf("Multiplication of a and b is %d\n",y);
printf("Division of a and b is %.2f\n",z); // %f is used for float.
}
