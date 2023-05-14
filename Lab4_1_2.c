#include <stdio.h>
#include <stdlib.h>

void swap_fun (int *a) {
    int term;
    for (int i = 0; i < 12; i+=2){
        term = *(a+i);
        a[i] = *(a+i+1);
        a[i+1] = term;
    }
}


int main()
{
    int *A = (int *) malloc (12 * sizeof(int));
    printf("Your array:\n");
    for (int i = 0; i < 12; i++) {
        A[i] = i;
        printf("%d ", A[i]);
    }
    printf("\n\nNow your array:\n");

    swap_fun(A);
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
