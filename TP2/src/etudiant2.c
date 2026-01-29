#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note1;
    float note2;
};

int main(void) {
    struct Etudiant etudiants[5];
    int i;

    /* Initialisation des étudiants avec strcpy */
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Emma");
    strcpy(etudiants[2].adresse, "5 rue Victor Hugo, Paris");
    etudiants[2].note1 = 15.0;
    etudiants[2].note2 = 13.5;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "8 rue Nationale, Lille");
    etudiants[3].note1 = 11.5;
    etudiants[3].note2 = 12.0;

    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Sarah");
    strcpy(etudiants[4].adresse, "15 place de la Republique, Marseille");
    etudiants[4].note1 = 18.0;
    etudiants[4].note2 = 17.5;

    /* Affichage des informations */
    for (i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.2f\n", etudiants[i].note1);
        printf("Note 2 : %.2f\n", etudiants[i].note2);
        printf("\n");
    }

    return 0;
}
