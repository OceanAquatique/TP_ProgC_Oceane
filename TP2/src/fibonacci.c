#include <stdio.h>

int main(void) {
    int n = 7;
    int u0 = 0;
    int u1 = 1;
    int un;
    int i;

    /* Affichage des deux premiers termes */
    printf("%d ", u0);
    printf("%d ", u1);

    /* Génération de la suite */
    for (i = 2; i <= n; i++) {
        un = u0 + u1;
        printf("%d ", un);

        u0 = u1;
        u1 = un;
    }

    printf("\n");

    return 0;
}
