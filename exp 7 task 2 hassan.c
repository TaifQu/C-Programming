#include <stdio.h>

int main() {
    int arr1[50][50], brr1[50][50], crr1[50][50];
    int i, j, n;

    printf("\n\nAddition of Two Matrices:\n");
    printf("------------------------------\n");

    // Input the size of the square matrix
    printf("Input the size of the square matrix: ");
    scanf("%d", &n);

    // Validate the matrix size
    if (n <= 0 || n > 50) {
        printf("Invalid matrix size. Please enter a size between 1 and 50.\n");
        return 1;
    }

    // Input elements for the first matrix
    printf("\nInput elements in the first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element - [%d],[%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nInput elements in the second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element - [%d],[%d]: ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }

    // Display the first matrix
    printf("\nThe First Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix
    printf("\nThe Second Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", brr1[i][j]);
        }
        printf("\n");
    }

    // Perform matrix addition
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            crr1[i][j] = arr1[i][j] + brr1[i][j];
        }
    }

    // Display the result of the addition
    printf("\nThe Addition of Two Matrices is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", crr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
