#include <stdio.h>

struct Height {
    int feet;
    int inch;
};

int main() {
    struct Height Billu = {5, 10};
    struct Height Harry = {5, 8};

    printf("Billu's height = %d feet %d inch\n", Billu.feet, Billu.inch);
    printf("Harry's height = %d feet %d inch\n", Harry.feet, Harry.inch);

    if (Billu.feet > Harry.feet ||
       (Billu.feet == Harry.feet && Billu.inch > Harry.inch)) {
        printf("Billu is taller.\n");
    } else if (Billu.feet == Harry.feet && Billu.inch == Harry.inch) {
        printf("Both are of same height.\n");
    } else {
        printf("Harry is taller.\n");
    }

    return 0;
}
