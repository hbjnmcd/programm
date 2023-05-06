#include <stdio.h>
#include <stdlib.h>

int fact_cycle(int num) {
    int res = 1;
    for (int i = 2; i <= num; i++) {
        res = res * i;
    }
    return res;
}

int fact_rec (int num) {
    if (num <= 1) return 1;
    else return num*fact_rec(num - 1);


}

int main()
{
    int x;
    printf("Your number is ");
    scanf("%d", &x);
    printf("Result of the first function is:\n %d! = %d\n", x, fact_cycle(x));
    printf("Result of the second function is:\n %d! = %d\n", x, fact_rec(x));
    getchar();
    return 0;
}
