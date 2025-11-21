#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // takes input including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // convert uppercase to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            count++;
        }
    }

    printf("Total vowels = %d", count);

    return 0;
}
