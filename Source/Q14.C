#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter the 1st number: ");
 scanf("%d",&a);
 printf("\nEnter the 2nd number: ");
 scanf("%d",&b);
 printf("\nEnter the 3rd number: ");
 scanf("%d",&c);
 if(a>b && a>c)
  printf("\n%d is the biggest",a);
 else if(b>a && b>c)
  printf("\n%d is the biggest",b);
 else
  printf("\n%d is  the biggest",c);
 getch();
}