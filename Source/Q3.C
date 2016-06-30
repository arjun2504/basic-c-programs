#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,q,r,sum;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 q=n;
 sum=n%10;
 while(q>0)
 {
  q=q/10;
  r=q%10;
  sum=sum+r;
 }
 printf("Sum of the digits = %d",sum);
 getch();
}