#include<stdio.h>
#include<conio.h>
void main(){
long int rev=0,rem=0;
long int n=0,temp=0;
clrscr();
printf("Enter a number: ");
scanf("%ld",&n);
temp=n;
while(n!=0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(temp==rev){
printf("Number %ld is Palindrom!",rev);
}
else{
printf("Number %ld->%ld is Not Palindrom!",temp,rev);
}
getch();
}