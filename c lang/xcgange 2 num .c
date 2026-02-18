#include<stdio.h>
void swap(int *a, int *b )
{
     int c;
     c = *a ;
     *a = *b ;
     *b = c;
}

int main()
{
    int a = 20;
    int b = 30 ;
    swap(&a,&b);
    int x = 10;
    int y = 50;
    swap(&x,&y);
    printf("a  == %d and b == %d ",a,b);
    
    printf("\n");
    printf("valud of x and y after swap is x  == %d and y == %d",x,y);
    return 0;
}