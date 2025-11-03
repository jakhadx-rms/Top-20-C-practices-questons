#include<stdio.h>
int main() {
    int base, exp;
    long long pow = 1;   // use long long for large powers  otherwise int

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        pow *= base;
    }

    printf("%lld\n",pow);

    return 0;
}
