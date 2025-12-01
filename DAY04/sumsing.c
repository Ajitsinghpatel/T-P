#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {     // repeat until single digit
        int sum = 0;
        int temp = num;

        while (temp > 0) {  // sum of digits
            sum += temp % 10;
            temp /= 10;
        }

        num = sum;          // update number with its digit-sum
    }

    printf("Single digit result: %d\n", num);

    return 0;
}
