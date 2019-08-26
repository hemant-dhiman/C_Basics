#include<stdio.h>
#include<conio.h>
void main(){
char a[100];
int i=0;
clrscr();
printf("Enter String: ");
gets(a);
puts(a);
while(a[i]!=NULL){
i++;
}
printf("\nString Length is: %d",i);
getch();
}