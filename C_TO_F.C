#include<stdio.h>
#include<conio.h>
void main(){
int choice=0;
float c,f;
clrscr();
printf("Enter your choice: ");
printf("\n1 C to F");
printf("\n2 F to C\n");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter temp: ");
scanf("%f",&c);
f=(c*9/5)+32;
printf("\n%0.1f degree Celcius = %0.1f degree Farenheit!",c,f);
break;
case 2:
printf("Enter temp: ");
scanf("%f",&f);
c=(f-32)*5/9;
printf("\n%0.1f degree Farenheit = %0.1f degree Celcius!",f,c);
break;
default:
break;
}
getch();
}