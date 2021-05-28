#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 150;
    int *pNumber = NULL;

    pNumber = &number;

    printf("number address is: %p\n", &number);
    printf("address of pNumber: %p\n", &pNumber);
    printf("value of pNumber: %p\n", pNumber);
    printf("value of what pNumber is pointing to: %d\n", *pNumber);

    return 0;
}