#include<stdio.h>
int main()
{
    int a, square;
    printf("Enter a number: ");
    scanf("%d", &a);
    square = a * a;
    printf("The square of %d is %d\n", a, square);
    return 0;
}