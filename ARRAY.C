#include<stdio.h>
#include<conio.h>
void main(){
int a[10],lim,i=0,ch,sum=0,min=0,max=0;
float avg;
clrscr();
printf("**NOTE-ARRAY SIZE SHOULD BE <=10\n");
printf("Enter size of array:");
scanf("%d",&lim);
printf("Enter element to array:\n");
for(i=0;i<lim;i++){
scanf("%d",&a[i]);
}
for(i=0;i<lim;i++){
printf("\nArray[%d]=%d",i,a[i]);
}
i=0;
printf("\nEnter any choice: ");
printf("\n1 average of array:");
printf("\n2 sum of array:");
printf("\n3 largest of array:");
printf("\n4 smallest of array:");
printf("\nchoice=");
scanf("%d",&ch);
switch(ch){
case 1:
for(i=0;i<lim;i++){
sum=sum+a[i];
}
avg=(sum/i);
printf("avr=%0.01f",avg);
break;
case 2:
for(i=0;i<lim;i++){
sum=sum+a[i];
}
i=0;
printf("\Sum is %d",sum);
break;
case 3:
max=a[0];
for(i=0;i<lim;i++){
if(a[i]>max){
max=a[i];
}
}
i=0;
printf("Largest of array %d",max);
break;
case 4:
min=a[0];
for(i=0;i<lim;i++){
if(a[i]<min){
min=a[i];
}
}
i=0;
printf("Smallest of array %d",min);
break;
default:
printf("\nwrong choice hit enter one more time");
break;
}
getch();
}
