#include "../include/str_editor.h"

char *str_sumc(char *a, char b)
{
    char s[2] = {b, '\0'};

    return str_sum(a, s);
}

char *str_sum(char *a, char *b)
{
    int a_len = strlen(a);
    int b_len = strlen(b);
    int r_len = a_len + b_len;
    char *r = (char *) malloc((r_len + 1) * sizeof(char));

    for(int x = 0; x < a_len; x++) { r[x] = a[x]; }

    for(int x = 0; x < b_len; x++) { r[a_len + x] = b[x]; }

    r[r_len] = '\0';

    return r;
}

int str_equal(char *a, char *b) { return strcmp(a, b) == 0; }

int str_len(char *a) { return strlen(a); }
