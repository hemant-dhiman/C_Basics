#include<graphics.h>
//Bresnhem
/*void main(){
int gd=DETECT,gm,i=0,j=0;
float x1=0,y1=0,x2=0,y2=0,p=0,dx=0,dy=0;
initgraph(&gd,&gm,"C://TC//BGI");
scanf("%f",&x1);
scanf("%f",&y1);
scanf("%f",&x2);
scanf("%f",&y2);
printf("(%f,%f)(%f,%f)\n",x1,y1,x2,y2);
dy=y2-y1;
dx=x2-x1;
p=2*dy-dx;
for(i=0,j=0;i<=x2,j<=y2;i++,j++){
if(p<0){
x1++;
y1=y1;
p=p+2*dy;
}
if(p>=0){
x1++;
y1++;
p=p+2*dy-2*dx;
}
putpixel(x1,y1,WHITE);
}
getch();
closegraph();
}*/


//DDA
/*
void main(){
int i=0,j=0,gd=DETECT,gm;
float x1=0,y1=0,x2=0,y2=0,slop=0,dx=0,dy=0;
initgraph(&gd,&gm,"C://TC//BGI");
scanf("%f",&x1);
scanf("%f",&y1);
scanf("%f",&x2);
scanf("%f",&y2);
printf("(%f,%f)(%f,%f)\n",x1,y1,x2,y2);
dy=y2-y1;
dx=x2-x1;
slop=dy/dx;
printf("%f",slop);
for(i=0,j=0;i<=x2,j<=y2;i++,j++){
if(slop>1){
y1++;
x1=x1+(1/slop);
}
if(slop<=1){
x1++;
y1=y1+slop;
}
putpixel(x1,y1,WHITE);
}
getch();
closegraph();
}
*/


//mid-point
/*
void main(){
int gd=DETECT,gm;
float x=0,y=0,r=0,x1=0,y1=0,p=0;
initgraph(&gd,&gm,"C://TC//BGI");
scanf("%f",&x1);
scanf("%f",&y1);
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
*/

//boundry_fill
/*
void boundry_fill(int x,int y,int fill,int boundry);
void main(){
int gd=DETECT,gm,x=0,y=0,r=0;
initgraph(&gd,&gm,"C://TC//BGI");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&r);
circle(x,y,r);
boundry_fill(x,y,4,WHITE);
getch();
closegraph();
}
void boundry_fill(int x,int y,int fill,int boundry){
if((getpixel(x,y))!=fill && (getpixel(x,y))!=boundry){
putpixel(x,y,fill);
boundry_fill(x+1,y,fill,boundry);
boundry_fill(x,y+1,fill,boundry);
boundry_fill(x-1,y,fill,boundry);
boundry_fill(x,y-1,fill,boundry);
}
}*/