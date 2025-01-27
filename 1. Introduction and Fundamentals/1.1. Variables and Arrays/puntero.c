#include <stdio.h>

int main() {
    
    int num = 10;
    int *p = &num;

    printf("value p = %d\n", p);
    printf("value *p= %d\n", *p);
    
    return 0;
}