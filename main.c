#include <stdio.h>
#include <stdlib.h>

double *allocate_vector (const int M) {
    double *A = (double *)malloc (M * sizeof(double));
    fill_vector(A, M);
    print_vector(A, M);
    return A;
}

void fill_vector (double *A, const int M) {
    printf("Input coordinates:\n");
    for (int i = 0; i < M; i++){
        scanf("%lf", A + i*M);
    }
}

void print_vector (double *A, const int M) {
    printf("Your vector:\n");
    for (int i = 0; i < M; i++){
            printf("%.2lf ", *(A + i*M));
        }
        printf("\n");
}

double *decart (double *A, double *B, const int M){
    double *C = (double *)malloc (M * sizeof(double));
    *C = (*(A + 1*M)) * (*(B + 2*M)) - (*(A+2*M)) * (*(B+1*M));
    *(C+1*M) = (*(A+2*M)) * (*B) - (*A) * (*(B+2*M));
    *(C+2*M) = (*A) * (*(B+1*M)) - (*(A+1*M)) * (*B);
    printf("\n");
    print_vector(C, 3);
    return C;
}

void free_vector (double *A) {
    free(A);
}


int main()
{
    double *a = allocate_vector(3);
    double *b = allocate_vector(3);
    double *c = decart(a, b, 3);

    free_vector(a);
    free_vector(b);
    free_vector(c);

    return 0;
}
