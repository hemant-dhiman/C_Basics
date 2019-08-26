#include<stdio.h>
#include<conio.h>
void main(){
int num,result,i=0;
int fibo(int a);
clrscr();
printf("Enter the no: ");
scanf("%d",&num);
if(num<0){
printf("Error negetive no!!");
}else{
printf("0");
for(i=1;i<num;i++){
printf(",%d",fibo(i));
}
}
getch();
}
int fibo(int a){
if(a==0){
return 0;
}else if(a==1){
return 1;
}else{
return(fibo(a-1)+fibo(a-2));
}
}