//read the data from one file and write it to another one
#include<stdio.h>
#include<conio.h>
void main(){
FILE* f,*f2;
int i,o=0;
clrscr();
f=fopen("read.txt","r");//file 1 object
f2=fopen("write.txt","w");//file 2 object
if(f==NULL){
printf("Error in read file!!");
}else if(f2==NULL){
printf("Error in write file!!");
}else{
i=fgetc(f);//get data char by char
while(i!=EOF){
printf("%c",i);
fputc(i,f2);//put data char by char
i=fgetc(f);
}
printf("\n****Operation Done!!****");
}
fclose(f);
fclose(f2);
getch();
}