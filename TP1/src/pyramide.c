#include <stdio.h>

int main(void) {
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {

        /* Espaces pour centrer */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        /* Nombres croissants : 1 -> i */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        /* Nombres décroissants : i-1 -> 1 */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* Retour à la ligne */
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}
