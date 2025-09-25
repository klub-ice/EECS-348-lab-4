#include "isEven.h"

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf_s("%d", &num);
    isEven(num);
    return 0;
}
