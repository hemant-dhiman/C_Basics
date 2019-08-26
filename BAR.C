#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
line(0,300,400,300);
bar(10,100,100,300);
bar3d(140,100,190,300,20,20);
getch();
closegraph();
}