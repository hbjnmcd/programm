#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char my_string1[10] = "";
    printf("1) Input string:\n");
    fgets(my_string1, 10, stdin);
    printf("Your string: %s", my_string1);
    double a = atof(my_string1);
    printf("Your number: %lf\n", a);
    printf("2) Input string:\n");
    char my_string2[10] = "";
    fgets(my_string2, 10, stdin);
    printf("Your string: %s", my_string2);
    int b = atoi(my_string2);
    printf("Your number: %d\n", b);
    return 0;
}
