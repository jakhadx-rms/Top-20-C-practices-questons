#include <stdio.h>

int main() {
    int n = 570;
    int temp = n;
    int rim, rev = 0;

    while (n > 0) {
        rim = n % 10;
        rev = rev * 10 + rim;
        n = n / 10;
    }

    if (temp == rev) {
        printf("Palindrome Number: %d\n", rev);
    } else {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}
