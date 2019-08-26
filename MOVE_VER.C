#include<graphics.h>
void main(){
int i=0,gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;i<=100;i++){
delay(10);
cleardevice();
putpixel(40,300+i,WHITE);//pixel
line(100,100+i,200,100+i);//line
circle(300,200+i,40);//circle
rectangle(400,400+i,300,300+i);//rectangle
//triangle
line(200,200+i,100,300+i);
line(100,300+i,300,300+i);
line(300,300+i,200,200+i);
}
getch();
closegraph();
}