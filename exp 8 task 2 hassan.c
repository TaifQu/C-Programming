#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("\t\t*** Palindrome Finder ***\n\n");
    printf("Enter Your String: ");
    
    // Use fgets for safer input handling
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str); // Calculate string length once

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            printf("The String is NOT a Palindrome\n");
            return 0;
        }
    }
    
    printf("The String is a Palindrome\n");
    return 0;
}
