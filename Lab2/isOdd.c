#include "isOdd.h"
#include  <stdio.h>

int isEven(int num)
{
    if (num % 2 != 0){
        printf("%d is odd.\n", num);
    }
    return 0;
}