#include<graphics.h>
void main(){
int x=0,y=0,r2=0,r=0,gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
printf("Enter x:\n");
scanf("%d",&x);
printf("Enter y:\n");
scanf("%d",&y);
printf("Enter radius:\n");
scanf("%d",&r);
printf("Entered Cordinates:\ncircle(%d,%d,%d);\n",x,y,r);
circle(x,y,r);
printf("Enter Scalling factor:\n");
scanf("%d",&r2);
cleardevice();
circle(x,y,r*r2);
printf("Translation Cordinates:\ncircle(%d,%d,%d);",x,y,r*r2);
getch();
closegraph();	
}