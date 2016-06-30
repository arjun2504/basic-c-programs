#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 for(n=1;n<=100;n++)
 {
  if(n%2==0 && n%3!=0 && n%5!=0)
   printf("\n%d",n);
 }
 getch();
}