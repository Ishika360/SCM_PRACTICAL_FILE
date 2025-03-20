#include <stdio.h>

int main() {
    int num = 4;
    int *ptr = &num;

    printf("Initial value: %d\n", ptr);

    ptr=ptr+4;

    printf("After addition the pointer: %u\n", ptr);
    printf("=== Code Execution Successful ===");

    return 0;
}
