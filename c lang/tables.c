#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("Enter the the number that you want the table of \n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n",n,i,n*i);
    }
    return 0;

}
