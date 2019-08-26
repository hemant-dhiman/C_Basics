#include<graphics.h>
void main(){
int gd=DETECT,gm;
float x1=0,y1=0,x=0,y=0,r=0,p=0;
initgraph(&gd,&gm,"C://TC//BGI");
printf("Enter x1:\n");
scanf("%f",&x1);
printf("Enter y1:\n");
scanf("%f",&y1);
printf("x2=%f\n",x1);
printf("y2=%f\n",y1);
printf("Enter Radius:\n");
scanf("%f",&r);
p=(1.25-r);
y=r;
do{
if(p<0.0){
 x++;
 p=p+2*x+1;
}else{
x++;
y--;
p=p+2*x+1-2*y;
}
putpixel(x1+x,y1+y,WHITE);
putpixel(x1-x,y1-y,WHITE);
putpixel(x1+x,y1-y,WHITE);
putpixel(x1-x,y1+y,WHITE);

putpixel(x1+y,y1+x,WHITE);
putpixel(x1-y,y1-x,WHITE);
putpixel(x1+y,y1-x,WHITE);
putpixel(x1-y,y1+x,WHITE);
}while(x<=y);
getch();
closegraph();
}