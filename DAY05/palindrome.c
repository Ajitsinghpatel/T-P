#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1; // last index

    i = 0; // reset i to start

    // Check palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}
