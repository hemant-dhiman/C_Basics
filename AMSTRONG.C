#include<stdio.h>
#include<conio.h>
void main(){
long int sum=0,n,temp,rem;
clrscr();
printf("Enter the nuber: ");
scanf("%ld",&n);
temp=n;
while(n>0){
rem=n%10;
sum=sum+(rem*rem*rem);
n/=10;
}
if(sum==temp)
printf("Number %ld is Armstrong!",sum);
else
printf("Number %ld is Not Armstrong!",sum);
getch();
}