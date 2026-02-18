#include <stdio.h>


grossSalary(float current)   
{
    float da, hra, gross;

    da = 0.10 * current;     
    hra = 0.20 * current;   
    gross = current + da + hra;

    return gross;
}

int main()
{
    float current, gross;

    printf("Enter current salary: ");
    scanf("%f", &current);

    gross = grossSalary(current);  

    printf("Gross Salary = %.2f", gross);

}  

