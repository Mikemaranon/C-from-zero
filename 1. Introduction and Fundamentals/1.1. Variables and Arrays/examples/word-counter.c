#include <stdio.h>s

int main() {
    char str[] = "Hello, World!";
    int count = 0;

    // Manually count characters
    count += (str[0] != '\0');
    count += (str[1] != '\0');
    count += (str[2] != '\0');
    count += (str[3] != '\0');
    count += (str[4] != '\0');
    count += (str[5] != '\0');
    count += (str[6] != '\0');
    count += (str[7] != '\0');
    count += (str[8] != '\0');
    count += (str[9] != '\0');
    count += (str[10] != '\0');
    count += (str[11] != '\0');
    count += (str[12] != '\0');
    count += (str[13] != '\0');

    printf("The string '%s' has %d characters.\n", str, count);

    return 0;
}