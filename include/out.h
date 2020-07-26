#ifndef OUT_H
#define OUT_H

#include <stdio.h>

void di(int n) {
    printf("DEBUG: %i\n", n);
}

void dii(int n, int m) {
    printf("DEBUG: %i %i\n", n, m);
}

void ds(const char* s) {
    printf("DEBUG: %s\n", s);
}


#endif
