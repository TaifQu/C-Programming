#include <stdio.h>

int factorialRecursive(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorialRecursive(num - 1);
}

int main() {
    int num;

    printf("\t\t\t * Recursive Factorial Function * \n\n");
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorialRecursive(num));
    return 0;
}
