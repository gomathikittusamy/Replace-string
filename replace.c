#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,len;
clrscr();
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
printf("%c",a[i]);
if(a[i]==a[i+1])
printf("*");
}
getch();
}
