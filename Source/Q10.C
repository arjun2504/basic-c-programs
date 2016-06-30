#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("The Prime numbers between 50 and 100 are...");
 for(n=50;n<=100;n++)
 {
  for(i=2;i<n;i++)
  {
   if(n%i==0)
    break;
  }
  if(n==i)
   printf("\n%d",n);
 }
 getch();
}