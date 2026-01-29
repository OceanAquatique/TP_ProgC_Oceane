#include <stdio.h>

int main(void) {
    /* Variables (comme variables.c, version simple) */
    char c = 'A';
    short s = -12;
    int i = 42;
    long int li = 123456;
    long long int lli = -987654321;
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    /* Pointeurs vers ces variables */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    int k;

    printf("Avant la manipulation :\n\n");

    /* char */
    printf("Adresse de c : %p, Valeur de c : ", (void*)pc);
    for (k = (int)sizeof(char) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pc;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* short */
    printf("Adresse de s : %p, Valeur de s : ", (void*)ps);
    for (k = (int)sizeof(short) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)ps;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* int */
    printf("Adresse de i : %p, Valeur de i : ", (void*)pi);
    for (k = (int)sizeof(int) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pi;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* long int */
    printf("Adresse de li : %p, Valeur de li : ", (void*)pli);
    for (k = (int)sizeof(long int) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pli;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* long long int */
    printf("Adresse de lli : %p, Valeur de lli : ", (void*)plli);
    for (k = (int)sizeof(long long int) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)plli;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* float */
    printf("Adresse de f : %p, Valeur de f : ", (void*)pf);
    for (k = (int)sizeof(float) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pf;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* double */
    printf("Adresse de d : %p, Valeur de d : ", (void*)pd);
    for (k = (int)sizeof(double) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pd;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* long double */
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for (k = (int)sizeof(long double) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pld;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* ===================== */
    /* Manipulation via pointeurs */
    /* ===================== */
    *pc = 'B';
    *ps = (short)(*ps + 1);
    *pi = *pi - 1;
    *pli = *pli + 10;
    *plli = *plli + 2;
    *pf = 1.0f;
    *pd = 2.0;
    *pld = (long double)3.0;

    printf("\nApres la manipulation :\n\n");

    /* char */
    printf("Adresse de c : %p, Valeur de c : ", (void*)pc);
    for (k = (int)sizeof(char) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pc;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* short */
    printf("Adresse de s : %p, Valeur de s : ", (void*)ps);
    for (k = (int)sizeof(short) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)ps;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* int */
    printf("Adresse de i : %p, Valeur de i : ", (void*)pi);
    for (k = (int)sizeof(int) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pi;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* long int */
    printf("Adresse de li : %p, Valeur de li : ", (void*)pli);
    for (k = (int)sizeof(long int) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pli;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* long long int */
    printf("Adresse de lli : %p, Valeur de lli : ", (void*)plli);
    for (k = (int)sizeof(long long int) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)plli;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* float */
    printf("Adresse de f : %p, Valeur de f : ", (void*)pf);
    for (k = (int)sizeof(float) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pf;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* double */
    printf("Adresse de d : %p, Valeur de d : ", (void*)pd);
    for (k = (int)sizeof(double) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pd;
        printf("%02x", p[k]);
    }
    printf("\n");

    /* long double */
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for (k = (int)sizeof(long double) - 1; k >= 0; k--) {
        unsigned char *p = (unsigned char*)pld;
        printf("%02x", p[k]);
    }
    printf("\n");

    return 0;
}
