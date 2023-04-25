#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>

union person{
    int age;
    int year;
};

int main()
{
    union person *Bob;
    Bob = (void*)malloc(sizeof(union person));
    Bob->age = 21;
    printf("%d\n", Bob->age);

    Bob->year = 2002;
    printf("%d\n", Bob->year);
    free(Bob);
    return 0;
}
