#include <stdio.h>

// Recursive function to compute factorial of n
int factorial(int n) {
    if (n == 0) { // Base case: 0! is 1
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case: n * (n-1)!
    }
}

int main() {
    int number = 5;
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}
