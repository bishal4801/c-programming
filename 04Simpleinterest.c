//calculate simple interest/
#include<stdio.h>
int main(){
	float p,t,r,si;
	printf("Enter the Principal: ");
	scanf("%f",&p);
	printf("Enter the Time: ");
	scanf("%f",&t);
	printf("Enter the Rate: ");
	scanf("%f",&r);
		si = (p*t*r)/100;
	printf("Simple interest is %.2f",si); 
	return 0;
}
