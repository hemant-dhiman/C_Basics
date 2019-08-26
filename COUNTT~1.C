//count the no. of line from file and no. of charracter
#include<stdio.h>
#include<conio.h>
void main(){
FILE* f;
int i=0,line=0,_char=0;
clrscr();
f=fopen("c.txt","r");
if(f==NULL){
printf("Error!!");
}else{
i=fgetc(f);
while(i!=EOF){
if(i==10){//or next line(i=="\n")
line++;
}
_char++;
//printf("%c",i);
i=fgetc(f);
}
}
printf("\nno. of charracter in file=%d\n",_char);
printf("no. of lines=%d",line);
fclose(f);
getch();
}