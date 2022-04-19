#include<stdio.h>
#include<conio.h>
void main(){
int x=20, y=10, z=15, w=10;
x+= ++w – y++;
x-= ++z % --y;
x*= ++w + y++ * y--;
printf(“x=%d y=%d z=%d w=%d”, x, y, z, w);
}

