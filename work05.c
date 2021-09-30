#include <stdio.h>
int main() {
    char x = "a";
    int y = 7;
    long z = 999;

    printf("char hex: %p\t char decimal: %lu\n", &x, &x);
    printf("int hex: %p\t \tint decimal: %lu\n", &y, &y);
    printf("long hex: %p\t long decimal: %lu\n", &z, &z);

    char *xp = &x;
    int *yp = &y;
    long *zp = &z;

    printf("char: %p\t int: %p\t long: %p\t\n", xp, yp, zp);

    *xp = 'b';
    *yp = 8;
    *zp = 1000;
    printf("char2: %c\t int2: %i\t long2: %lu\n", x, y, z);

    unsigned int xyz = 200200200;
    int *pointer1 = &xyz;
    char *pointer2 = &xyz;

    printf("pointer1: %p \t pointer1 points to: %u \n", pointer1, *pointer1);
    printf("pointer2: %p \t pointer2 points to: %u \n", pointer2, *pointer2);

    printf("unsigned int decimal: %x \t\n", xyz);
    printf("unsigned int hex: %u \t\n", xyz);

    printf("hex: %hhx %hhx %hhx %hhx\n", *pointer2, *(pointer2+1), *(pointer2+2), *(pointer2+3));
    printf("decimal: %hhu %hhu %hhu %hhu\n\n", *pointer2, *(pointer2+1), *(pointer2+2), *(pointer2+3));

    int i;
    printf("incremented by 1:\n");
    for(i=0;i<4;i++) {
        *(pointer2+i) += 1;
        printf("pointer2 hex: %x\t pointer2 decimal: %u\n", xyz, xyz);
    }
    for(i=0;i<4;i++) {
        printf("pointer2 %d hex: %hhx\t decimal: %hhu\n", i+1, *(pointer2+i), *(pointer2+i));
    }

    printf("incremented by 16:\n");
    for(i=0;i<4;i++) {
        *(pointer2+i) += 16;
        printf("pointer2 hex: %x\t pointer2 decimal: %u\n", xyz, xyz);
    }
    for(i=0;i<4;i++) {
        printf("pointer2 %d hex: %hhx\t decimal: %hhu\n", i+1, *(pointer2+i), *(pointer2+i));
    }
    return 0;
}