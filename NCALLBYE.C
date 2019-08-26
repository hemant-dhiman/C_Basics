#include<stdio.h>
#include<conio.h>
void call_by_value(int i);
void main(){
int a=10;
clrscr();
printf("value of a=%d before function call!\n",a);
printf("Call to function:\n");
call_by_value(a);
printf("\nvalue of a=%d after function call!\n",a);
getch();
}
void call_by_value(int i){
printf("i=%d Before adding 10",i);
i=i+10;
printf("\ni=%d after adding 10",i);
}