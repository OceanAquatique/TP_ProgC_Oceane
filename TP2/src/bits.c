#include <stdio.h>

int main(void) {
    int d = 268468224;  
    int bit4;
    int bit20;

    /* Extraction du 4eme bit de gauche (bit 28) */
    bit4 = (d >> 28) & 1;

    /* Extraction du 20eme bit de gauche (bit 12) */
    bit20 = (d >> 12) & 1;

    /* Vérification des deux bits */
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
