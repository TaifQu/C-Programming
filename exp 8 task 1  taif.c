#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter Your String: ");
    // Using fgets instead of gets for safer input
    fgets(str, sizeof(str), stdin);

    // Removing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Calculate string length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("String Length: %d Characters\n", length);
    return 0;
}
