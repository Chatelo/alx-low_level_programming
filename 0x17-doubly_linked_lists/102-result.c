#include <stdio.h>

int isPalindrome(int number) {
    int reversed = 0;
    int temp = number;

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return (reversed == number);
}

int main() {
    int largestPalindrome = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    // Save the result in the file
    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largestPalindrome);
        fclose(file);
        printf("Result saved in the file '102-result'.\n");
    } else {
        printf("Unable to open the file for writing.\n");
    }

    return 0;
}

