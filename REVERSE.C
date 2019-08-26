#include<stdio.h>
#include<conio.h>
void main(){
char a[100];
int i=0;
clrscr();
printf("enter string: ");
gets(a);
puts(a);
printf("\nafter reverse!\n");
while(a[i]!=NULL){
i++;
}
for(i=i;i>=0;i--){
printf("%c",a[i]);
}
getch();
}