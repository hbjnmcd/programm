#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    //double x = 0;
    printf(" Input length of array:\n");
    scanf("%d", &n);
    double *A = (double *) malloc (n * sizeof(double));
    double *p;
    printf(" Input number:\n");
    for (p = A; p - A < n; p++) {
        scanf("%lf", p);
    }
    printf("\n Your array:\n");

    for (p = A; p - A < n; p++) {
        printf("%lf\n", *p);
    }

    free(A);

   return 0;
}
