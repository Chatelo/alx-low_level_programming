#include <stdio.h>

int is_palindrome(int n) {
int rev = 0;
int temp = n;
while (temp != 0) {
rev = rev * 10 + temp % 10;
temp /= 10;
}
return n == rev;
}

int main() {
int i, j;
int largest = 0;
for (i = 100; i < 1000; i++) {
for (j = i; j < 1000; j++) {
int product = i * j;
if (is_palindrome(product) && product > largest) {
largest = product;
}
}
}
printf("%d", largest);
return 0;
}
