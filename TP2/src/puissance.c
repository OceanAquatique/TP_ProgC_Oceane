#include <stdio.h>

int main(void) {
    int a = 2;
    int b = 3;
    int resultat = 1;
    int i;

    /* Calcul de a puissance b */
    for (i = 1; i <= b; i++) {
        resultat = resultat * a;
    }

    printf("%d a la puissance %d = %d\n", a, b, resultat);

    return 0;
}
