#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
    int x1 = 1;
    int x2 = -1;
    int x3 = -2;
    unsigned y1 = 1;
    unsigned y2 = 4294967295;//max
    unsigned y3 = 4294967294;//max-1
    printf("int 1: ");
    show_bytes((byte_pointer) &x1,sizeof(int)); //int 1:  01 00 00 00

    printf("int -1: ");
    show_bytes((byte_pointer) &x2,sizeof(int)); //int -1:  ff ff ff ff

    printf("int -2: ");
    show_bytes((byte_pointer) &x3,sizeof(int)); //int -2:  fe ff ff ff

    printf("unsigned 1: ");
    show_bytes((byte_pointer) &y1,sizeof(unsigned)); //unsigned 1:  01 00 00 00

    printf("unsigned 4294967295 (max): ");
    show_bytes((byte_pointer) &y2,sizeof(unsigned));
    //unsigned 4294967295 (max):  ff ff ff ff
    
    printf("unsigned 4294967294 (max-1): ");
    show_bytes((byte_pointer) &y3,sizeof(unsigned)); //
    //unsigned 4294967294 (max-1):  fe ff ff ff
}
