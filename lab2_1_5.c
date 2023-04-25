#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int x = 0;
    printf(" Input length of array:\n");
    scanf("%d", &n);
    int *A = (int *) malloc (n * sizeof(int));
    printf(" Input number:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        A[i] = x;
    }
    A = A + n - 1;

    printf("\n Your array:\n");

    for (int i = 0; i < n; i++) {
        printf("%d\n", *A);
        A--;
    }

    free(A);

   return 0;
}
