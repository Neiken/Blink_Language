#include <stdio.h>

#include "include/interpreter.h"

int main(int len, char **args)
{
    if(len < 2) { printf("\033[31mtoo few arguments. expected 2\033[0m\n"); return 1; }
    else if(len > 2) { printf("\033[31mtoo much arguments. expected 2\033[0m\n"); return 1; }

    interpretBlinkObjectFile(args[1]);

    return 0;
}
