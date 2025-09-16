#include <stdio.h>

int main() {
    int low, up, i, j, Pr;
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &up);
    printf("Prime numbers between %d and %d are: ", low, up);
    for (i = low; i <= up; i++) {
        if (i < 2) {
            continue;
        }
        Pr = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Pr = 0;
                break;
            }
        }
        if (Pr == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}