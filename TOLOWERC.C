#include<stdio.h>
#include<conio.h>
void main(){
char a[100];
char b[100];
int i=0;
clrscr();
printf("Enter string: ");
gets(a);
puts(a);
while(a[i]!=NULL){
if(a[i]>=65 && a[i]<=90){
b[i]=a[i]+32;
}else{
b[i]=a[i];
}
i++;
}
b[i]=NULL;
printf("\nAfter lowercase:");
printf("\n%s",b);
/*
printf("\nA=%d\n",'A');
printf("Z=%d\n",'Z');
printf("a=%d\n",'a');
printf("z=%d\n",'z');
*/
getch();
}