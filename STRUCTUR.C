#include<stdio.h>
#include<conio.h>
struct abc{
int i;
char c;
float f;
double d;
}obj2;
void main(){
struct abc obj;
struct abc *a,*b;
clrscr();
printf("By Predefine Object:\n");
obj.i=9;
obj.c='C';
obj.f=1.4;
obj.d=12.08791;
printf("int : %d\n",obj.i);
printf("char : %c\n",obj.c);
printf("float : %f\n",obj.f);
printf("double : %lf\n",obj.d);
printf("\nEnter values:");
printf("\nEnter int value:");
scanf("%d",&obj2.i);
printf("\nEnter char value:");
scanf(" %c",&obj2.c);
printf("\nEnter float value:");
scanf(" %f",&obj2.f);
printf("\nEnter double value:");
scanf("%lf",&obj2.d);
printf("By define Object:\n");
printf("int : %d\n",obj2.i);
printf("char : %c\n",obj2.c);
printf("float : %f\n",obj2.f);
printf("double : %lf\n",obj2.d);
printf("\nMemory size %d is of Object1!",sizeof(obj));
printf("\nMemory size %d is of Object1!",sizeof(obj2));

a=&obj;
printf("\nusing pointer %d",a->i);
b=&obj2;
printf("\nusing pointer %d",b->i);
getch();
}
