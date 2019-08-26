#include<stdio.h>
#include<conio.h>
void main(){
int n;
int facto(int a);
clrscr();
printf("Engte a num: ");
scanf("%d",&n);
printf("Factorial=%d",facto(n));
getch();
}
int facto(int a){
if(a>0){
return a*facto(a-1);
}
else{
return 1;
}
}