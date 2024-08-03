#include <stdio.h>
#include <stdlib.h>
#include "helloworld.h"


int main(void)
{
    const char *greeting = helloWorld();
    if (greeting != NULL) {
        printf("%s\n", greeting);
        free((void *)greeting);
    }
    else {
        printf("Memalloc fail\n");
    }
    return 0;
}
