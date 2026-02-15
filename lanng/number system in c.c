#include<stdio.h>

int main()
{    
    //
    int num1, num2, num3;
    //
    printf("Enter a ocatal number ex. 025: ");
    scanf("%o", &num1);
    //
    printf("Enter a hexadecimal number ex. 0x25: ");
    scanf("%x", &num2);
    //
    printf("Enter a decimal number: ");
    scanf("%d", &num3);
    //
    printf("Converted octal number: %d\n", num1);
    printf("Converted hexadecimal number: %d\n", num2);
    printf("Decimal number: %d\n", num3);
    
    return 0;
}