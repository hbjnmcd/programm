#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char my_string[] = "He1lo, wOR1d!";
    for (int i = 0; my_string[i] != '\0'; i++) {
        if (isalnum(my_string[i])) printf("'%c' is alphanumeric character\n", my_string[i]);
        else printf("'%c' isn't alphanumeric character\n", my_string[i]);
        if (isalpha(my_string[i])) {
            printf("'%c' is ", my_string[i]);
            if (islower(my_string[i])) printf("lowercase letter\n");
            else printf("uppercase letter\n");
        }
        else printf("'%c' isn't letter\n", my_string[i]);
        if (isdigit(my_string[i])) printf("'%c' is a digit\n", my_string[i]);
        if (isspace(my_string[i])) printf("'%c' is a space character\n", my_string[i]);
        if (ispunct(my_string[i])) printf("'%c' is a punctuation character\n", my_string[i]);
        printf("\n");
    }
    return 0;
}
