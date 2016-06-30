#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main()
{
 float radius, area;
 clrscr();
 printf("Enter the radius of the circle: ");
 scanf("%f",&radius);
 area=pi*pow(radius,2);
 printf("The Area of the circle is %0.2f",area);
 getch();
}