#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	char h='#';
	int i=0,c=0;
	clrscr();
	printf("Enter String: ");
	gets(a);
	puts(a);
	while(a[i]!=NULL){
		if(a[i]=='E' || a[i]=='e'){
			a[i]=h;
			c++;
		}
		i++;
	}
	printf("\n%s",a);
	printf("\nE/e occur %d times!",c);
	getch();
}
