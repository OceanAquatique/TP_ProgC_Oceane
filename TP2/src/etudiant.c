#include <stdio.h>

int main(void) {
    /* Tableaux pour les informations */
    char noms[5][20] = {
        "Dupont", "Martin", "Durand", "Bernard", "Petit"
    };

    char prenoms[5][20] = {
        "Alice", "Paul", "Emma", "Lucas", "Sarah"
    };

    char adresses[5][50] = {
        "10 rue de Paris",
        "25 avenue Victor Hugo",
        "3 boulevard Voltaire",
        "8 rue Nationale",
        "15 place de la Republique"
    };

    float note_prog[5] = {14.5, 12.0, 16.0, 10.5, 18.0};
    float note_sys[5]  = {13.0, 11.5, 15.0, 12.0, 17.5};

    int i;

    /* Affichage des informations */
    for (i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", note_prog[i]);
        printf("Note Systeme d'exploitation : %.2f\n", note_sys[i]);
        printf("\n");
    }

    return 0;
}
