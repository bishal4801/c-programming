// If condition
#include<stdio.h>
void main(){
	char name;
	int age;
	//printf("Enter your name: ");
	//scanf("%s",&name);
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>18){
		printf("%s, You are a Voter.",name);
	}
	else{
		printf("%s, You are not a Voter.",name);
	}
}
