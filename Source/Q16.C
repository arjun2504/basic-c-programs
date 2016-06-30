#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 if(n%2==0)
  printf("%d is an even number",n);
 else
  printf("%d is an odd number",n);
 getch();
}