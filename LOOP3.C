#include<stdio.h>
#include<conio.h>

void main(){
int a;
int b=1;
clrscr();
printf("enter a number:");
scanf("%d",&a);
while(a<=b)
{if(a%2==0){
printf("even number are\t%d\n",b);
}else{
printf("odd number are\t%d\n",b);
}
a--;
}
getch();
}