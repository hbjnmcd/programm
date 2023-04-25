#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = (int *) malloc(sizeof(int));
    int *b = (int *) malloc(sizeof(int));

    printf("Input two numbers:\n");
    printf("_______________\n");
    scanf("%d\n", a);
    //printf("___________\n");
    scanf("%d", b);
    printf("_______________\n");

    printf("Sum of number: %d", *a + *b);

    free(a);
    free(b);

    return 0;
}
