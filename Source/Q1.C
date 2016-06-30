#include<stdio.h>
#include<conio.h>
void main()
{
 int n,q,r,large;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 q=n;
 large=n%10;
 while(q>0)
 {
  q=q/10;
  r=q%10;
  if(r>large)
   large=r;
 }
 printf("Large digit: %d",large);
 getch();
}