#include<stdio.h>
#include<conio.h>
void main()
{
 int n,q,r,l;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 q=n;
 l=n%10;
 printf("Reverse: %d",l);
 while(q>10)
 {
  q=q/10;
  r=q%10;
  printf("%d",r);
 }
 getch();
}