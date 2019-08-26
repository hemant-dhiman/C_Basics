#include<stdio.h>
#include<conio.h>
union data{
int i;
float f;
double d;
char c;
};

void main(){
union data obj;
union data *a;
clrscr();
obj.i=100;
//obj.f=12.4;
//obj.d=12.123456;
//obj.c='C';
a=&obj;
printf("\nusing pointer %d",a->i);
//printf("\nusing pointer %f",a->f);
//printf("\nusing pointer %lf",a->d);
//printf("\nusing pointer %c",a->c);
printf("\n Size of union %d",sizeof(obj));
getch();
}
