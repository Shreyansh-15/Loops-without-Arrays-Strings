#include <stdio.h>

int main() {
    int n; 
    int i; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Please enter a positive number.\n");
        return 1; 
    }

    printf("\nNumbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
