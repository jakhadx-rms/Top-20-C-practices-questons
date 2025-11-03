#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

   while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;
    int lcm = (x * y) / gcd;

    printf("GCD of %d and %d = %d\n", x, y, gcd);
    printf("LCM of %d and %d = %d\n", x, y, lcm);

    return 0;
}
