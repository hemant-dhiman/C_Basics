#include<graphics.h>
void main(){
int x=0,y=0,xt=0,yt=0,r=0,gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
printf("Enter x:\n");
scanf("%d",&x);
printf("Enter y:\n");
scanf("%d",&y);
printf("Enter radius:\n");
scanf("%d",&r);
printf("Entered Cordinates:\ncircle(%d,%d,%d);\n",x,y,r);
circle(x,y,r);
printf("Enter translation cordinate of circle=x:\n");
scanf("%d",&xt);
printf("Enter translation cordinate of circle=y:\n");
scanf("%d",&yt);
cleardevice();
circle(x+xt,y+yt,r);
printf("Translation Cordinates:\ncircle(%d,%d,%d);",x+xt,y+yt,r);
getch();
closegraph();	
}