#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nBefore swap (in main): x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapByValue (in main): x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference (in main): x = %d, y = %d\n", x, y);
    return 0;
}
