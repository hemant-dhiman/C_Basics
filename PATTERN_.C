#include<stdio.h>
#include<conio.h>
void main(){
int i=0,j,n;
char a='A';
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++){
printf("%c",a);
a++;
for(j=1;j<=i;j++){
printf("\n");
}
}
getch();
}