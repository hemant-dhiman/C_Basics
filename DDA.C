#include<graphics.h>
void main(){
int gd=DETECT,gm;
float x1=0,y1=0,x2=0,y2=0,Dx=0,Dy=0,slop=0;
int i=0,j=0;
initgraph(&gd,&gm,"C://TC//BGI");
printf("Enter x1:\n");
scanf("%f",&x1);
printf("Enter y1:\n");
scanf("%f",&y1);
printf("x1=%f\n",x1);
printf("y1=%f\n",y1);
printf("Enter x2:\n");
scanf("%f",&x2);
printf("Enter y2:\n");
scanf("%f",&y2);
printf("x2=%f\n",x2);
printf("y2=%f\n",y2);
Dy=y2-y1;
Dx=x2-x1;
slop=Dy/Dx;
printf("slop=%f\n",slop);
for(i=0,j=0;i<=x2,j<=y2;i++,j++){
if(slop<=1){
x1++;
y1=y1+slop;
}
if (slop>1)
{
x1=x1+(1/slop);
y1++;
}
putpixel(x1,y1,WHITE);
}
getch();
//closegraph();
}