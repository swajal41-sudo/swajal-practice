#include<stdio.h>


int main()
{
   float l,b, area;
   printf("Enter the length and breadth o the rectangle : \n");
   scanf("%f%f",&l,&b);
   area = l*b ;
   printf("Area of the rectangle is : %.2f",area);
   return 0;
}