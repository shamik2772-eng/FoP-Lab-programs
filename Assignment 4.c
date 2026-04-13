#include <stdio.h>

int main() {
    float basicPay, hra, ta, grossSalary, professionalTax, netSalary;
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);
    hra = 0.10 * basicPay;
    ta = 0.05 * basicPay;
    grossSalary = basicPay + hra + ta;
    professionalTax = 0.02 * grossSalary;
    netSalary = grossSalary - professionalTax;
    printf("\n--- Salary Details ---\n");
    printf("Basic Pay: %.2f\n", basicPay);
    printf("HRA (10%%): %.2f\n", hra);
    printf("TA (5%%): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Professional Tax (2%%): %.2f\n", professionalTax);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}