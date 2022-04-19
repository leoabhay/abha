#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define PIE 3.14
int main(){
	float l,b,r,result;
	int ch, choice;
	do{
		printf("\n ***Menu driven program***");
		printf("\n 1.Area of circle \n 2.Area of rectangle \n 3.Perimeter of rectangle \n 4.Volume of sphere");
		printf("Enter your choice:");
		scanf("%c",&choice);
		switch(choice){
			case1:
				printf("Enter raidus:");
				scanf("%f",&r);
				result=PIE*pow(r,2);
				printf("The area of circle is %f",result);
				break;
				case2:
					printf("Enter length and breadth:");
				scanf("%f %f",&l,&b);
				result=l*b;
				printf("The area of rectangle is %f",result);
				break;
				case 3:
						printf("Enter length and breadth:");
				scanf("%f %f",&l,&b);
				result=2*(l+b);
				printf("The perimeter of rectangle is %f",result);
				break;
				case4:
					printf("Enter raidus:");
				scanf("%f",&r);
				result=4/3*PIE*pow(r,3);
				printf("The area of circle is %f",result);
				case5:
			    default:printf("\n Error");
			    break;
					
		}
		printf("\n Do you want to continue(Y/N):");
		scanf("%c",ch);
	}
	while(ch=='Y'// ch=='Y');
return 0;	
}
