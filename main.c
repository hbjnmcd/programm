#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MY_SIZE 20

int main()
{
    setlocale(LC_ALL, "en_US.iso88591");
    char my_string[MY_SIZE] = "";
    printf("Input string:\n");
    fgets(my_string, MY_SIZE, stdin);
    printf("Your string: %s\n", my_string);

    // Number 1
    int i;
    for (i = 0; my_string[i] != '\0'; i++);
    printf("1) Length of your string: %d\n", i - 1);

    // Number 2
    char *ptr;
    int k = 0;
    for (ptr = my_string; *ptr != '\0'; ptr++) {
            k++;
    };
    printf("2) Length of your string: %d\n", k - 1);
    // Number 3
    int n = strlen(my_string);
    printf("3) Length of your string: %d\n\n", n-1);

    // Number 4
    char second_string[MY_SIZE] = "";
    strcpy(second_string, my_string);
    printf("Copy string: %s\n\n", second_string);


    // Number 5
    char third_string[10] = "AbCdE";
    char fourth_string[5] = "FgHiJ";
    strncat(third_string, fourth_string, 5);
    printf("Combined string: %s\n\n", third_string);

    // Number 6
    char *string_literal1 = "Hello world";
    char *string_literal2 = "Goodbue world";
    int j = strcmp(string_literal1, string_literal2);
    printf("S1: %s\nS2: %s\nNum < 0: S1 < S2;\nNum > 0: S1 > S2;\nNum = 0: S1 = S2.\nNum = %d\n", string_literal1, string_literal2, j);

    // Number 7
    char s[] = "AaBbCcDdEeFf";

    for(int i=0;i<strlen(s);i++) {
        s[i]=tolower(s[i]);
    }
    printf("\n%s\n", s );

    for(int i=0;i<strlen(s);i++) {
        s[i]=toupper(s[i]);
    }
    printf("%s\n", s );
    return EXIT_SUCCESS;
}
