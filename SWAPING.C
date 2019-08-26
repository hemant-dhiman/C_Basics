#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("Enter a & b: ");
scanf("%d%d",&a,&b);
printf("Before Switch a=%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter Switch a=%d,b=%d",a,b);
getch();
}