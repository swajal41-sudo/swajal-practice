#include<stdio.h>

int main()
 {
    int k,i,j, a[3][3],b[3][3],c[3][3];
    printf("Enter elements of 1st matrix\n");
    //input matrix a
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    //input matrix b
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //multiply and then print
    printf("Multiplication of two matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");

    }
    return 0;
 }
