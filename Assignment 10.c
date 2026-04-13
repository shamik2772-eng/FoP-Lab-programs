#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice;
    double num1, num2, result;
    int n;

    printf("===== Simple Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Factorial not defined for negative numbers.\n");
            else
                printf("Factorial = %lld\n", factorial(n));
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}