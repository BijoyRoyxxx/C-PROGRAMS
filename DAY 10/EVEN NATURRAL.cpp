#include <stdio.h>

int sumEven() {
    int sum = 0;
    for(int i = 1; i <= 10; i++) {
        sum += 2 * i;
    }
    return sum;
}

int main() {
    int result = sumEven();
    printf("Sum of first 10 even natural numbers = %d", result);
    return 0;
}
