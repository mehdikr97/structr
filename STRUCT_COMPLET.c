#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rue[100];
    char ville[100];
    int code_postal;
} Adresse;

typedef struct {
    char nom[100];
    char prenom[100];
    int age;
    float note;
    Adresse adresse;
} Apprenant;

// Mettre à jour les informations d'un apprenant
void mettreAJourApprenant(Apprenant apprenant[], int index) {
    printf("Mise à jour des informations de l'apprenant %d\n", index + 1);

    printf("Nouveau nom : ");
    scanf("%s", apprenant[index].nom);
    printf("Nouveau prénom : ");
    scanf("%s", apprenant[index].prenom);
    printf("Nouvel âge : ");
    scanf("%d", &apprenant[index].age);
    printf("Nouvelle note : ");
    scanf("%f", &apprenant[index].note);
    printf("Nouvelle rue : ");
    scanf("%s", apprenant[index].adresse.rue);
    printf("Nouvelle ville : ");
    scanf("%s", apprenant[index].adresse.ville);
    printf("Nouveau code postal : ");
    scanf("%d", &apprenant[index].adresse.code_postal);

    printf("Informations mises à jour avec succès.\n");
}

int main() {
    int nmbr;
    int i = 0;

    printf("Donner le nombre d'apprenants : \n");
    scanf("%d", &nmbr);

    // Déclarer un tableau d'apprenants
    Apprenant apprenants[nmbr];

    // Remplissage des informations des apprenants
    while (i < nmbr) {
        printf("Entrez les informations de l'apprenant %d :\n", i + 1);

        printf("Entrez le nom : \n");
        scanf("%s", apprenants[i].nom);

        printf("Entrez le prénom :\n");
        scanf("%s", apprenants[i].prenom);

        printf("Entrez l'âge : \n");
        scanf("%d", &apprenants[i].age);

        printf("Entrez la note : \n");
        scanf("%f", &apprenants[i].note);

        printf("Entrez la rue : \n");
        scanf("%s", apprenants[i].adresse.rue);

        printf("Entrez la ville : \n");
        scanf("%s", apprenants[i].adresse.ville);

        printf("Entrez le code postal : \n");
        scanf("%d", &apprenants[i].adresse.code_postal);

        // Affichage des informations de l'apprenant
        printf("Les informations de l'apprenant %d sont :\n", i + 1);
        printf("Nom: %s\n", apprenants[i].nom);
        printf("Prénom: %s\n", apprenants[i].prenom);
        printf("Âge: %d\n", apprenants[i].age);
        printf("Note: %.2f\n", apprenants[i].note);
        printf("Adresse: %s, %s, %d\n", apprenants[i].adresse.rue, apprenants[i].adresse.ville, apprenants[i].adresse.code_postal);
        
        i++; 
    }
// Mettre à jour les informations d'un apprenant
void mettreAJourApprenant(Apprenant apprenant[], int index, int nmbr) {
    if (index >= 0 && index < nmbr) {
        printf("Mise à jour des informations de l'apprenant %d\n", index + 1);

        printf("Nouveau nom : ");
        scanf("%s", apprenant[index].nom);
        printf("Nouveau prénom : ");
        scanf("%s", apprenant[index].prenom);
        printf("Nouvel âge : ");
        scanf("%d", &apprenant[index].age);
        printf("Nouvelle note : ");
        scanf("%f", &apprenant[index].note);
        printf("Nouvelle rue : ");
        scanf("%s", apprenant[index].adresse.rue);
        printf("Nouvelle ville : ");
        scanf("%s", apprenant[index].adresse.ville);
        printf("Nouveau code postal : ");
        scanf("%d", &apprenant[index].adresse.code_postal);

        printf("Informations mises à jour avec succès.\n");
    } else {
        printf("Index invalide.\n");
    }
}
void supprimerApprenant(Apprenant apprenant[], int* nmbr, int index) {
    if (index >= 0 && index < *nmbr) {
        // Décaler les éléments après l'index de suppression vers la gauche
        for (int i = index; i < *nmbr - 1; i++) {
            apprenant[i] = apprenant[i + 1];
        }
        (*nmbr)--;  // Réduire la taille du tableau
        printf("Apprenant supprimé avec succès.\n");
    } else {
        printf("Index invalide.\n");
    }
}
  
 // Demander si l'on veut supprimer un apprenant
    int index;
    char reponse;
    printf("Voulez-vous supprimer un apprenant ? (O/N) : ");
    scanf(" %c", &reponse);

    if (reponse == 'O' || reponse == 'o') {
        printf("Entrez l'index de l'apprenant à supprimer (1 à %d) : ", nmbr);
        scanf("%d", &index);

        if (index >= 1 && index <= nmbr) {
            supprimerApprenant(apprenants, &nmbr, index - 1);  // L'index de l'utilisateur est basé sur 1, mais les tableaux sont basés sur 0
        } else {
            printf("Index invalide.\n");
        }
    }
    // Demander si l'on veut mettre à jour les informations d'un apprenant
    printf("Voulez-vous mettre à jour les informations d'un apprenant ? (O/N) : ");
    scanf(" %c", &reponse);

    if (reponse == 'O' || reponse == 'o') {
        printf("Entrez l'index de l'apprenant à mettre à jour (1 à %d) : ", nmbr);
        scanf("%d", &index);

        if (index >= 1 && index <= nmbr) {
            mettreAJourApprenant(apprenants, index - 1, nmbr);
        } else {
            printf("Index invalide.\n");
        }
    }
   i = 0;  
    while (i < nmbr) {
        printf("Apprenant %d :\n", i + 1);
        printf("Nom: %s\n", apprenants[i].nom);
        printf("Prénom: %s\n", apprenants[i].prenom);
        printf("Âge: %d\n", apprenants[i].age);
        printf("Note: %.2f\n", apprenants[i].note);
        printf("Adresse: %s, %s, %d\n", apprenants[i].adresse.rue, apprenants[i].adresse.ville, apprenants[i].adresse.code_postal);
        
        i++; 
    }

    return 0;
}
