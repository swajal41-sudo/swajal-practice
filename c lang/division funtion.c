#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter two numbers to divide\n");
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("The division of %.0f and %.0f is %.4f",a,b,c);
    return 0;
}