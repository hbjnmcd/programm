#include <stdio.h>
#include <stdlib.h>

double *allocate_matrix (const int M, const int N) {
    double *A = (double *)malloc (M * N * sizeof(double));
    fill_matrix(A, M, N);
    print_matrix(A, M, N);
    return A;
}

void fill_matrix (double *A, const int M, const int N) {
    printf("Input elements:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
                printf("A[%d][%d] = ", i + 1, j + 1);
                scanf("%d", A + i*M +j);
        }
    }
}

void print_matrix (double *A, const int M, const int N) {
    printf("Your matrix:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", *(A + i*M +j));
        }
        printf("\n");
    }
}

void free_matrix (double *A) {
    free(A);
}




int main()
{
    printf("Input matrix size:\n");
    int m, n;
    scanf("%d%d", &m, &n);
    double *A = allocate_matrix(m,n);
    free_matrix(A);

    return 0;
}
