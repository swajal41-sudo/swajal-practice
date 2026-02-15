#include<stdio.h>
#include<math.h>

int main()
{
    int base, power;
    double ans;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &power);

    ans = pow(base, power);

    printf("%d to the power of %d is %.0f\n", base, power, ans);

    return 0;
}