#include <stdio.h>

int main() {
    int n; 
    int i; 
    int sum = 0; 
    int currentOdd = 1; 

    printf("Enter the number of odd numbers to sum (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        sum = sum + currentOdd; 
        
        currentOdd = currentOdd + 2; 
    }

    printf("\nThe sum of the first %d odd numbers is: %d\n", n, sum);    
    return 0; 
}
