#include <stdio.h>
#include <string.h>

void addBinary(char a[], char b[], char result[]) {
    int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0, k = 0;
    char temp[100];

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        
        temp[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    temp[k] = '\0';

    int len = strlen(temp);
    for (int x = 0; x < len; x++)
        result[x] = temp[len - 1 - x];

    result[len] = '\0';
}

int main() {
    char bin1[100], bin2[100], result[100];

    printf("Enter first binary string: ");
    scanf("%s", bin1);
    
    printf("Enter second binary string: ");
    scanf("%s", bin2);

    addBinary(bin1, bin2, result);

    printf("Sum of binary strings: %s\n", result);

    return 0;
}
