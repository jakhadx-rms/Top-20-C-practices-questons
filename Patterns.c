#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i < n; ++i) {
        for (int s = 0; s < (n - i); ++s) printf("   ");

        printf("%d", i);

        if (i > 1) {
            for (int s = 0; s < (2 * i - 3); ++s) printf("   ");
            printf("%d", i);
        }
        printf("\n");
    }

    for (int x = n; x >= 1; --x) printf("%d ", x);
    for (int x = 2; x <= n; ++x) printf(" %d ", x);
    printf("\n");

    return 0;
}
  
 //Output:       1
               2   2
            3         3
         4               4
      5                     5
   6                           6
  7 6 5 4 3 2 1  2  3  4  5  6  7 

Algoritham :

Step : Upper Pyramid (for loop from i = 1 to n - 1)

For each row (from top to just before the middle line):

(a) Print leading spaces

Use a loop s = 0 to n - i - 1

Print 3 spaces each time (" ") to align the pyramid shape.

(b) Print the first number on the left

Print the number i.

(c) Print inner spaces and right-side number

If i > 1, then:

Print (2 * i - 3) groups of 3 spaces (" ") between the two numbers.

Print the number i again at the right end.

(d) Move to next line

Print newline (\n).

Step : Bottom Line (Full Mirror Row)

This creates the widest base line with mirrored numbers.

(a) Print decreasing part

For x = n to 1 (descending), print x followed by a space.

(b) Print increasing part

For x = 2 to n (ascending), print x followed by a space.

(c) Move to next line.
