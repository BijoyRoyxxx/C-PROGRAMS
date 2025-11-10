#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

void stringCopy(char src[], char dest[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int stringCompare(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}

void stringConcat(char s1[], char s2[]) {
    int i = 0, j = 0;

    while(s1[i] != '\0') {
        i++;
    }
    while(s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int main() {
    char str1[100], str2[100], copyStr[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string = %d\n", stringLength(str1));

    stringCopy(str1, copyStr);
    printf("Copied string = %s\n", copyStr);

    int cmp = stringCompare(str1, str2);
    if(cmp == 0)
        printf("Strings are equal\n");
    else if(cmp > 0)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");

    stringConcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    return 0;
}
