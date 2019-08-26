#include<stdio.h>
#include<conio.h>
void main(){
char a[100];
printf("Enter String: ");
//without space
//scanf("%s",&a);

//with space
gets(a);
//printf("\nEntered String: %s",a);
getch();
}