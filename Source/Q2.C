#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,q,r,sum,t;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 q=n;
 t=n%10;
 sum=pow(t,3);
 while(q>0)
 {
  q=q/10;
  r=q%10;
  sum=sum+pow(r,3);
 }
 if(sum==n)
  printf("%d is an Armstrong number",n);
 else
  printf("%d is NOT an Armstrong number",n);
 getch();
}