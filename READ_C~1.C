//read from file charracter by charracter and display it on screen
#include<stdio.h>
#include<conio.h>
void main(){
FILE* f;
int i1;
char i[100];
clrscr();
f=fopen("c.txt","r");
if(f==NULL){
printf("Error!!");
}else{
i1=fgetc(f);
while(i1!=EOF){
putchar(i1);
i1=fgetc(f);
}
}
getch();
}