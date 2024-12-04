#include <stdio.h> // Include proper header for input/output functions

int main() {
    int n;

    printf("\t\t*** Array Reverser ***\n\n");
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) { // Handle invalid array sizes
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }
    
    int arr[n];
    int *ptr = arr;
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: ", i);
        scanf("%d", ptr + i);
    }
    
    printf("\nArray elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    return 0;
}
