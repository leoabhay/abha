#include<stdio.h>
#include<conio.h>
int main(){
	int choice;
	float num1,num2,result;
	printf("***Menu Driven Program***");
	printf("\n Enter your choice");
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit");
	scanf("%d",&choice);
	if(choice<=4){
		printf("\n Enter any two number:");
		scanf("%f %f",&num1,&num2);
	}
	switch(choice)
	{
		case1:
			result=num1+num2;
			break;
			case2:
				result=num1-num2;
				break;
				case3:
					result=num1*num2;
					break;
					case4:
						result=num1/num2;
						break;
				        default:
								printf("\n Error!!!-----\n please enter your choice between 1 to 5");
	}
	printf("The result is %f",result);
	getch();
	return 0;
}
