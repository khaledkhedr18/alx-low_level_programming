#include <stdio.h>

int main() {
    int sum = 0;
    int i;
    
    for (i = 1; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    // Print the sum using putchar
    if (sum == 0) {
        putchar('0');
    } else {
        if (sum < 0) {
            putchar('-');
            sum = -sum;
        }

        // Print the digits of the sum one by one
        int reversed = 0;
        while (sum > 0) {
            reversed = reversed * 10 + (sum % 10);
            sum /= 10;
        }
        
        while (reversed > 0) {
            putchar('0' + (reversed % 10));
            reversed /= 10;
        }
    }

    // Print a newline
    putchar('\n');

    return 0;
}
