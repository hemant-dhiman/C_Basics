#include<stdio.h>
#include<conio.h>
void main(){
long int x=0,y=1,n,i=0,sum=0;
clrscr();
printf("Enter Limit: ");
scanf("%ld",&n);
printf("%ld,%ld",x,y);
for(i=2;i<n;i++){
sum=x+y;
printf(",%ld",sum);
x=y;
y=sum;
}
printf(" End");
getch();
}