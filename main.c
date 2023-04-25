#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double **pointer = NULL;
    double *a = (double *) malloc(sizeof(double));;
    pointer = (void *) malloc(sizeof(void));
    *pointer = a;
    **pointer = 2;
    printf("%lf", **pointer);
    free(pointer);
    free(a);
    return 0;
}
