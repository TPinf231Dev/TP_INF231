
#include <stdio.h>

int main() {
    int u[3], v[3], resultat[3];
    int i;

    printf("Entrez les 3 composantes du vecteur u :\n");
    for (i = 0; i < 3; i++) {
        printf("u[%d] = ", i+1);
        scanf("%d", &u[i]);
    }

    printf("\nEntrez les 3 composantes du vecteur v :\n");
    for (i = 0; i < 3; i++) {
        printf("v[%d] = ", i+1);
        scanf("%d", &v[i]);
    }

    // Calcul du produit vectoriel
    resultat[0] = u[1]*v[2] - u[2]*v[1];
    resultat[1] = u[2]*v[0] - u[0]*v[2];
    resultat[2] = u[0]*v[1] - u[1]*v[0];

    printf("\nLe produit vectoriel u x v est : ");
    printf("(%d, %d, %d)\n", resultat[0], resultat[1], resultat[2]);

    return 0;
}
