#include<conio.h>
#include<stdio.h>

struct data{
int i;
char c[50];
};

void main(){
int z=0;
struct data obj[10];
clrscr();
for(z=0;z<4;z++){
printf("enter i:");
scanf("%d",&obj[z].i);
fflush(stdin);
printf(" \nenter c:");
gets(obj[z].c);
fflush(stdin);
}

for(z=0;z<4;z++){
printf(" \n value of i: %d",obj[z].i);
printf(" \n value of c: %s",obj[z].c);
}

printf("size of entire structure is: %d",sizeof(data));
getch();
}
