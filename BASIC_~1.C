#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
putpixel(40,300,WHITE);//pixel
line(100,100,200,100);//line
circle(300,200,40);//circle
rectangle(400,400,300,300);//rectangle
//triangle
line(200,200,100,300);
line(100,300,300,300);
line(300,300,200,200);
getch();
closegraph();
}