#include<stdio.h>


division(int a,int b)
{
    float ans;
    ans = a / b ;
    return (ans);
}

int main()
{   
    int n,d;
    float ans;
    printf("enter 2 numbers :");
    scanf("%d %d",& n,& d);
    ans = division(n,d);
    printf("the answer is %.4f", ans);
    return 0;
}
