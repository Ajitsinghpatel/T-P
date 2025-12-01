#include<stdio.h>

int main(){
    int num1 , num2;
int freq1[10] = {0}, freq2[10] = {0};

printf("Enter the first num :");
scanf("%d",&num1);
printf("Enter the second num :");
scanf("%d",&num2);

while (num1 > 0) {
        int digit = num1 % 10;
        freq1[digit]++;
        num1 /= 10;
    }

while(num2 > 0){
    int rem = num2 % 10;
    freq2[rem]++;
    num2 /=10;
}

for (int i = 0; i < 10; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram Numbers\n");
            return 0;
        }
    }

    printf("Anagram Numbers\n");

    return 0;
}


