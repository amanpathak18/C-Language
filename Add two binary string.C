#include <stdio.h>
#include <string.h>

void addBinaryStrings(char bin1[], char bin2[], char result[]) {
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    
    int maxLength = len1 > len2 ? len1 : len2;
    int carry = 0;
    
    int i = len1 - 1, j = len2 - 1, k = maxLength;

    result[k] = '\0';  // Null terminate the result string.

    while (i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? bin1[i] - '0' : 0;
        int bit2 = (j >= 0) ? bin2[j] - '0' : 0;

        int sum = bit1 + bit2 + carry;
        
        carry = sum / 2;  // Calculate carry for next iteration
        result[k - 1] = (sum % 2) + '0';  // Store the result bit

        i--;
        j--;
        k--;
    }
}

int main() {
    char bin1[100], bin2[100], result[101];

    // Input two binary strings
    printf("Enter first binary string: ");
    scanf("%s", bin1);
    printf("Enter second binary string: ");
    scanf("%s", bin2);

    addBinaryStrings(bin1, bin2, result);

    printf("Sum of binary strings: %s\n", result);

    return 0;
}
