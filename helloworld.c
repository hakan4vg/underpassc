//
// Created by Hakan Avgın on 3.08.2024.
// I wasn't joking when I said I'll start from the rock bottom
//
#include "helloworld.h"
#include <stdlib.h>
#include <string.h>

const char* helloWorld(void) {
    char *hello = (char *)malloc(14 * sizeof(char)); //Allocate memory
    if(hello == NULL) {
        return NULL;
    }
    strcpy(hello, "Hello World!");
    return hello;
}