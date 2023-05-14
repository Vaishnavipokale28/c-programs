#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   printf("\n Enter a number:");
   scanf("%d",&n);
   if(n>=0)
   {
       printf("%d is positive number",n);
   }
   else
   {
       printf("%d is negative number",n);
   }
}