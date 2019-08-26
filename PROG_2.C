#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],b[100],d[100];
	int i=0,x=0,z=0;
	clrscr();
	printf("\nEnter First String: ");
	gets(a);
	printf("\nEnter Second String: ");
	gets(b);
	while(a[i]!=NULL){
		x++;
		i++;
	}
	i=0;
	while(b[i]!=NULL){
		x++;
		i++;
	}
	i=0;
	while(x!=0){
		while(a[i]!=NULL){
			d[i]=a[i];
			i++;
		}
		while(b[z]!=NULL){
			d[i]=b[z];
			z++;
			i++;
		}
		x--;
	}
	d[i]=NULL;
	printf("\n%s",d);
	printf("\nThe length of Third String: %d",strlen(d));
	getch();
}