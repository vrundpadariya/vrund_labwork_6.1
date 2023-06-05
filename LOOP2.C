#include<stdio.h>
#include<conio.h>

void main(){
int a=1;
int b;
clrscr();
printf("enter a number:");
scanf("%d",b);
while(a<=b)
{
printf("%d\n",a);
a++;
}
getch();
}