//read from stdin using fscanf and write it to file
#include<stdio.h>
#include<conio.h>

void main(){
FILE* f;
int d=0;
char c[100];
clrscr();
f=fopen("Read_stdin_to_file.txt","w");
if(f==NULL){
printf("Invalid");
}else{
fscanf(stdin,"%s",c);
fscanf(stdin,"%d",&d);
printf("%s,%d",c,d);
fprintf(f,"Character is:%s And Integer is:%d\n",c,d);
fclose(f);
}
getch();
}