#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c,d,e,sum;
float percent;
printf("Enter marks in five subjects:");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if (a>=40 && b>=40 && c>=40 && d>=40 && e>=40){
	sum=a+b+c+d+e;
	percent=(float)sum/500*100;
	printf("Percentage is:%f",percent);
	if (percent>=80){
		printf("\n Distinction");
	}else if (percent>=60 && percent<=79){
		printf("\n First division");
	}else if (percent>=50 && percent<=59){
		printf("\n Second division");
	}else if (percent>=40 && percent<=49){
		printf("\n Third division");
	}else{
		printf("\n Fail");
	}
	}else{
		printf("Fail");}
		getch ();
		return 0;
}
