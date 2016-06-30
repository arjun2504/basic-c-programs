#include<stdio.h>
#include<conio.h>
void main()
{
 int n,es=0,os=0,r,count=0;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  count++;
  if(count%2==0)
   es=es+r;
  else
   os=os+r;
  n=n/10;
 }
 printf("Sum of Even Positioned Digits = %d",es);
 printf("\nSum of Odd Positioned Digits = %d",os);
 getch();
}