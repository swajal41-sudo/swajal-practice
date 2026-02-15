#include<stdio.h>

//swajal's 1st ans
void value(int num)
{
   
    if (num % 2 == 0){
        printf("%d is an even number \n",num);
    } 
    else {
        printf("%d is an odd number \n",num);
    }
}

int main()
{
    int number;
    printf("enter any number: ");
    scanf("%d",& number);
    value(number);
    return 0;
}
