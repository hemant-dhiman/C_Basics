#include<graphics.h>
void flood_fill(int x,int y,int fill,int boundry);
void main(){
int x=0,y=0,r=0,gd=DETECT,gm;
initgraph(&gd,&gm,"c://tc//bgi");
printf("Enter x:\n");
scanf("%d",&x);
printf("Enter y:\n");
scanf("%d",&y);
printf("Enter radius:\n");
scanf("%d",&r);
printf("Entered Cordinates:\ncircle(%d,%d,%d);",x,y,r);
circle(x,y,r);
flood_fill(x+1,y+1,4,WHITE);
getch();
closegraph();	
}
void flood_fill(int x,int y,int fill,int boundry){
	int pixel=getpixel(x,y);
	if(pixel==0){
		putpixel(x,y,fill);
		flood_fill(x+1,y,fill,boundry);
		flood_fill(x,y+1,fill,boundry);
		flood_fill(x-1,y,fill,boundry);
		flood_fill(x,y-1,fill,boundry);
	}
}