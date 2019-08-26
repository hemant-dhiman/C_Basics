//read from file using fgets
#include<stdio.h>
#include<conio.h>
void main(){
FILE* f;
char c[100];
clrscr();
f=fopen("file.txt","r");
if(f==NULL){
printf("File Doesn't Exist!!");
}else{
while(fgets(c,100,f)!=NULL){
printf("%s",c);
}
}
getch();
}