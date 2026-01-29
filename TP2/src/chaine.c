#include <stdio.h>

int main(void) {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[50];
    char concat[50];
    int i;
    int longueur = 0;
    int index = 0;

    /* 1) Calcul de la longueur de chaine1 */
    i = 0;
    while (chaine1[i] != '\0') {
        longueur++;
        i++;
    }

    printf("Longueur de chaine1 = %d\n", longueur);

    /* 2) Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie de chaine1 = %s\n", copie);

    /* 3) Concaténation de chaine1 et chaine2 */
    i = 0;
    while (chaine1[i] != '\0') {
        concat[index] = chaine1[i];
        index++;
        i++;
    }

    i = 0;
    while (chaine2[i] != '\0') {
        concat[index] = chaine2[i];
        index++;
        i++;
    }

    concat[index] = '\0';

    printf("Concatenation = %s\n", concat);

    return 0;
}
