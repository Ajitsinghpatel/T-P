#include <stdio.h>

int main() {
    int num1, num2;
    int freq1[10] = {0}, freq2[10] = {0};

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Count digit frequency of num1
    // int temp = num1;
    while (num1 > 0) {
        int digit = num1 % 10;
        freq1[digit]++;
        num1 /= 10;
    }

    // Count digit frequency of num2
    // temp = num2;
    while (num2 > 0) {
        int digit = num2 % 10;
        freq2[digit]++;
        num2 /= 10;
    }

    // Compare frequencies
    for (int i = 0; i < 10; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram Numbers\n");
            return 0;
        }
    }

    printf("Anagram Numbers\n");

    return 0;
}
