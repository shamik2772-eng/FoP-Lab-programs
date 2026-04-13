#include <stdio.h>

int main() {
    int num1, num2, i, min;
    int smallestDivisor = 0, gcd = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find smaller number
    if (num1 < num2)
        min = num1;
    else
        min = num2;

    for (i = 2; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    if (smallestDivisor != 0)
        printf("Smallest common divisor (other than 1): %d\n", smallestDivisor);
    else
        printf("No common divisor other than 1 exists.\n");

    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}