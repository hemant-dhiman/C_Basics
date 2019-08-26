#include<stdio.h>
#include<conio.h>
void main(){
int n;
clrscr();
scanf("%d",&n);
do{
printf("%d^2=%d || ",n,(n*n));
printf("%d^3=%d\n",n,(n*n*n));
n--;
}while(n>0);
getch();
}