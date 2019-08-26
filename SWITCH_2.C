#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
printf("Enter a & b: ");
scanf("%d%d",&a,&b);
printf("Before Switch a=%d,b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter Switch a=%d,b=%d",a,b);
getch();
}