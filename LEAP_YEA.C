#include<stdio.h>
#include<conio.h>
void main(){
long int year;
clrscr();
printf("Enter the year: ");
scanf("%ld",&year);
if(year%400==0)
printf("Year %ld is leap year!",year);
else if(year%100==0)
printf("Year %ld is NOT-leap year!",year);
else if(year%4==0)
printf("Year %ld is leap year!",year);
else
printf("Year %ld is NOT leap year!",year);
getch();
}