#include<stdio.h>
#include<conio.h>
void main(){
char a[100];
int i=0,vowel=0;
clrscr();
printf("Enter String: ");
gets(a);
puts(a);
while(a[i]!=NULL){
if(a[i]=='A'||a[i]=='a'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u'||a[i]=='E'||a[i]=='e'){
printf("\nVovel: %c",a[i]);
vowel++;
}
i++;
}
printf("\nTotal vowels are %d",vowel);
printf("\nTotal length is %d",i);
getch();
}
