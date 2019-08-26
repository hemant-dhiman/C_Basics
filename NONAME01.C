#include<stdio.h>
#include<conio.h>
void main(){
int i=0,j=0,k=0,n;
char a='A';
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++){
for(j=0;j<i;j++){
printf(" ");
}
for(k=n;k>j;k--){
printf("%c",a);
a++;
}
printf("\n");
}
getch();
}