#include <stdio.h>

int fact(int a) {
    int facto = 1;
    for (int i = 2; i <= a; ++i){
    	facto*=i;
	}
    return facto;
}

int main() {
    int n = 125;
    int temp = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }

    if (sum == temp) {
        printf("%d is a Strong number\n", temp);
    } else {
        printf(" NOT a Strong number\n");
    }
    return 0;
}
