#include<stdio.h>
int powr(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*powr(n,p-1);
}
int main()
{    
    int n,p;
    printf("enter the number ");
    scanf("%d",&n);
    printf("enter the power ");    
    scanf("%d",&p);
    int ans = powr(n,p);
    printf("%d",ans);
    return 0;
}