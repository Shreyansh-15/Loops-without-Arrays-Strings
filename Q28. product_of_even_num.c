#include <stdio.h>

int main() {
    int n; 
    int i;     
    long long product = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("\nThere are no even numbers between 1 and %d.\n", n);
        printf("Product: 1\n");
        return 0; 
    }

    for (i = 1; i <= n; i++) {        
        if (i % 2 == 0) {
            product = product * i;
        }
    }
    printf("\nThe product of even numbers from 1 to %d is: %lld\n", n, product);
    return 0; 
}
