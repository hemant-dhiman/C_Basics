#include<graphics.h>
void main(){
int i=0,gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;i<=200;i++){
delay(10);
cleardevice();
putpixel(40+i,300,WHITE);//pixel
line(100+i,100,200+i,100);//line
circle(300+i,200,40);//circle
rectangle(400+i,400,300+i,300);//rectangle
//triangle
line(200+i,200,100+i,300);
line(100+i,300,300+i,300);
line(300+i,300,200+i,200);
}
getch();
closegraph();
}