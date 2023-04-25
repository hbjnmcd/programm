#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = (int *) malloc(sizeof(int));
    int *b = (int *) malloc(sizeof(int));

    scanf("%d%d", a, b);
    //scanf("%d", b);

    if (*a > *b) {
        printf("Max number: %d", *a);
    }
    else {
        printf("Max number: %d", *b);
    }

    free(a);
    free(b);

    return 0;
}
