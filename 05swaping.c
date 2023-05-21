// Swaping two numbers
#include<stdio.h>
void main(){
	int x,y,z;
	printf("\tEnter any number: "); // '\t' is used to give space
	scanf("%d",&x);
	printf("\tEnter another number: ");
	scanf("%d",&y);
	
	printf("\n\tThe Value of x is %d\n",x);
	printf("\tThe Value of y is %d\n\n",y);
		z=x; // value of x goes to z, now x is empty.
		x=y; // value of y goes to x, now y is empty.
		y=z; // value of z goes to y i.e value of x goes into y.
		
	printf("\t<---Ater Swaping---> \n\n");
	
	printf("\tThe Value of x is %d\n",x);
	printf("\tThe Value of y is %d\n",y);
}
