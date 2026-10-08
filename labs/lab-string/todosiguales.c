#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    (void)argc;

    for (char **arg = argv + 2; *arg != NULL; arg++)
        if (!AreEqual(argv[1], *arg)) {
            printf("0\n");
            return 0;
        }

    printf("1\n");
    return 0;
}