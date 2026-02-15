#include<stdio.h>
#include<string.h>
//ask user for 2 numbers

int scan2nums(int *a, int *b)
{
    printf("enter two numbers\n");
    scanf("%d%d",a,b);
    return 0;
}
int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}

int mul(int a, int b)
{

    return (a*b);
}
float ans(float a, float b)
{
 
    return  (a/b);
}
int main()
{
    int a,b,c;
    float d;
    int cal;
    char name[50];
    int bignum;
    printf("this is a simple calculator program\n");
    printf ("enter your name: \n");
    scanf ("%s", name);
    printf ("welcome %s to the calculator program\n", name);
    if (strlen(name) > 10)
    {
        printf ("you have to long name katva le bhai/behen :) \n");
    }
    printf("choose the operation to be performed\n");
    scan2nums(&a,&b);
    printf("enter 1 for addition\n");
    printf("enter 2 for subtraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    printf("enter 5 for square of first number\n");
    printf("enter your choice\n");

    scanf("%d",&cal);

    switch(cal)
    {
        case 1: c=add(a,b);
        break;
        case 2: c=sub(a,b);
        break;
        case 3: c=mul(a,b);
        break;
        case 4:
        if( b == 0 )
        {
            printf ("Enter a non zero division \n");
            break;
        }
         d=ans(a,b);
         break;
        default: printf("invalid choice \n");
    }
    if (cal== 1 || cal== 2 || cal== 3)
    {
        printf("the result is %d\n",c);

    }
    else if (cal == 4)
    {
        if( b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            printf("the result is %f\n",d);
        }
    }
    else
    {
        printf("please try again\n");
    }

    return 0;
}
