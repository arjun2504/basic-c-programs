#include<stdio.h>
#include<conio.h>
void main()
{
 int n,o,r,rev=0;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 o=n;
 while(o>0)
 {
  r=o%10;
  rev=rev*10+r;
  o=o/10;
 }
 if(rev==n)
  printf("The number is a palindrome.");
 else
  printf("The number is NOT a palindrome.");
 getch();
}