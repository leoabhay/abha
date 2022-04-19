#include<stdio.h>
#include<conio.h>
void main() {
	int a,b,choice,result;
	printf("***MENU DRIVEN CHOICE***");
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication");
	printf("Enter your choice:");
	scanf("%d",&choice);
	printf("Enter two numbers:")
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case1:result=a+b;
		printf("The result is:%d",result);
		break;
		
		case2:result=a-b;
		printf("The result is:%d",result);
		break;
		
		case3:result=a*b;
		printf("The result is:%d",result);
		break;
		default:printf("Wrong choice")
	}
	getch();
}
