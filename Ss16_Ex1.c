#include <stdio.h>

int main() {

    int number = 42;
    int *ptr = &number;

    printf("Gia tri cua number (cach 1): %d\n", number);
    printf("Gia tri cua number (cach 2): %d\n", *ptr);

    printf("Dia chi cua number (cach 1): %p\n", (void*)&number);
    printf("Dia chi cua number (cach 2): %p\n", (void*)ptr);

    return 0;
}

