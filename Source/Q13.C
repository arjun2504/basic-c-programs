#include<stdio.h>
#include<conio.h>
void main()
{
 float c,f;
 clrscr();
 printf("Enter the Celcius value: ");
 scanf("%f",&c);
 f=(c*9)/5+32;
 printf("\nThe equivalent Farenheit value is %0.1f",f);
 getch();
}