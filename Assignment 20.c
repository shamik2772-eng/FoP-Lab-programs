#include <stdio.h>

//without pointers
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue (without pointers): a = %d, b = %d\n", a, b);
}

//with pointers
void swapPointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);

    swapValue(x, y);
    printf("After swapValue (in main): x = %d, y = %d\n", x, y);

    swapPointer(&x, &y);
    printf("After swapPointer (in main): x = %d, y = %d\n", x, y);

    return 0;
}