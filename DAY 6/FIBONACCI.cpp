#include <stdio.h>
int main() {
    int n; 
    int a = 0, b = 1; 
    int c; 
    int sum = 0; 
    printf("Enter the number terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a); 
        sum += a; 
        c = a + b; 
        a = b; 
        b = c; 
    }
    printf("\nSum of the Fibonacci series: %d\n", sum);
    return 0; 
}