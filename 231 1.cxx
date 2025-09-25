#include <stdio.h>
#include <stdlib.h>

// Fonction de comparaison pour qsort
int comparer(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Fonction pour calculer la médiane
double mediane(int T[], int n) {
    // On trie le tableau
    qsort(T, n, sizeof(int), comparer);

    if (n % 2 == 1) {
        // Si n est impair, la médiane est l’élément du milieu
        return T[n / 2];
    } else {
        // Si n est pair, la médiane est la moyenne des deux du milieu
        return (T[n / 2 - 1] + T[n / 2]) / 2.0;
    }
}

int main() {
    int T[] = {7, 3, 1, 9, 5, 2};
    int n = sizeof(T) / sizeof(T[0]);

    double m = mediane(T, n);

    printf("La médiane est : %.2f\n", m);

    return 0;
}