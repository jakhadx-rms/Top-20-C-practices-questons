// Code
#include<stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", n, fact);
    return 0;

}

// Algorithm

Start
Read n
Set fact = 1
Repeat from i = 1 to n:
→ fact = fact * i
Print fact
Stop
