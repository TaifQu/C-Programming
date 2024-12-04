#include <stdio.h> // Include proper header for input/output functions

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("\t\t*** Addition using Pointers ***\n\n");
    
    // Input two numbers
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    
    // Assign the addresses of num1 and num2 to the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    
    // Display the result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}

