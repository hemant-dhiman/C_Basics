#include<stdio.h>
#include<conio.h>
void main(){
float avr,sum=0,a;
int n;
clrscr();
scanf("%d",&n);
a=n;
do{
sum=sum+n;
printf("Sum=%0.1f,",sum);
printf("n=%d\n",n);
n--;
}while(n>0);
avr=sum/a;
printf("%0.1f",avr);
getch();
}