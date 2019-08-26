#include<stdio.h>
#include<conio.h>
void main(){
int i=0,j,n;
char a;
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++){
a='A';
for(j=1;j<=i;j++){
printf("%c",a);
a++;
}
printf("\n");
}
getch();
}