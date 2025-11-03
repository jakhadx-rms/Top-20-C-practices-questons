#include<stdio.h>
   
int main() {
     int n = 153;        
    int temp = n;
    int a = 0, sum = 0;

   
    while (temp > 0) {
        a++;
        temp /= 10;
    }

    temp = n; 

   
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= a; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);

    return 0;
}
