#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[]) {
    // Compare strings using the built-in function strcmp
    return strcmp(str1, str2);
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare strings
    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are identical.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second.\n");
    } else {
        printf("The first string is lexicographically greater than the second.\n");
    }

    return 0;
}
