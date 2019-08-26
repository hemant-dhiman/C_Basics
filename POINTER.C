#include<stdio.h>
#include<conio.h>
void main(){
int a=5,b=9,*k,**p,***c;
clrscr();
printf("Value of a %d\n",a);
printf("Value of b %d\n",b);
k=&a;
printf("value of a inside k =%d(%u)\n",*k,&k);
p=&k;
printf("value of k inside p =%d(%u->%u)\n",**p,&p,&*p);
c=&p;
printf("value of p inside c =%d(%u->%u->%u)\n",***c,&c,&*c,&**c);
k=&b;
printf("value of b inside k =%d(%u)\n",*k,&k);
getch();
}