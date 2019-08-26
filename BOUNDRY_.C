#include<graphics.h>
void boundry_fill(int x,int y,int fill,int boundry);
void main(){
int x=0,y=0,r=0,gd=DETECT,gm;
initgraph(&gd,&gm,"c://Tc//BGI");
printf("Enter x:\n");
scanf("%d",&x);
printf("Enter y:\n");
scanf("%d",&y);
printf("Enter radius:\n");
scanf("%d",&r);
printf("Entered Cordinates:\ncircle(%d,%d,%d);",x,y,r);
circle(x,y,r);
boundry_fill(x,y,4,WHITE);
getch();
closegraph();
}
void boundry_fill(int x,int y,int fill,int boundry){
	if((getpixel(x,y))!=fill && (getpixel(x,y)!=boundry)){
		putpixel(x,y,fill);
		boundry_fill(x+1,y,fill,boundry);
		boundry_fill(x,y+1,fill,boundry);
		boundry_fill(x-1,y,fill,boundry);
		boundry_fill(x,y-1,fill,boundry);
	}
}