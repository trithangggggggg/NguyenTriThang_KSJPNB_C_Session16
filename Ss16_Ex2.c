#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int num1 = 100, num2 = 200;

    printf("Truoc khi hoan doi:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("Sau khi hoan doi:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

