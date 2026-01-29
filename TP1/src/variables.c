#include <stdio.h>

int main(void) {
    /* Types entiers signés */
    char c = 'A';
    short s = -12;
    int i = 42;
    long int li = 123456;
    long long int lli = -987654321;

    /* Types entiers non signés */
    unsigned char uc = 200;
    unsigned short us = 65000;
    unsigned int ui = 3000000000U;
    unsigned long int uli = 4000000000UL;
    unsigned long long int ulli = 9000000000000000000ULL;

    /* Types réels (pas de signed/unsigned) */
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    /* Affichage */
    printf("char = %c\n", c);
    printf("unsigned char = %u\n", uc);

    printf("short = %d\n", s);
    printf("unsigned short = %u\n", us);

    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);

    printf("long int = %ld\n", li);
    printf("unsigned long int = %lu\n", uli);

    printf("long long int = %lld\n", lli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
