#include <stdio.h>

int main(void) {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;
    int i;

    for (i = 0; i < taille; i++) {
        int n = nombres[i];
        int binaire[32];
        int index = 0;
        int j;

        /* Cas particulier : 0 */
        if (n == 0) {
            printf("0 en binaire : 0\n");
            continue;
        }

        /* Conversion en binaire (division par 2) */
        while (n > 0) {
            binaire[index] = n % 2;
            n = n / 2;
            index++;
        }

        /* Affichage du binaire à l'envers */
        printf("%d en binaire : ", nombres[i]);
        for (j = index - 1; j >= 0; j--) {
            printf("%d", binaire[j]);
        }
        printf("\n");
    }

    return 0;
}
