#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a,b,c,count;
 a=0;
 b=1;
 clrscr();
 printf("Upto how many terms, you need to generate Fibonacci numbers? ");
 scanf("%d",&n);
 printf("\n%d\n%d",a,b);
 count=0;
 while(count<=n-3)
 {
  c=a+b;
  count++;
  printf("\n%d",c);
  a=b;
  b=c;
 }
 getch();
}