#include <stdio.h>

void inverser(int T[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = T[i];
        T[i] = T[n - i - 1];
        T[n - i - 1] = temp;
    }
}

int main()
{
    int T[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(T) / sizeof(T[0]);

    printf("Tableau original : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }

    inverser(T, n);

    printf("\nTableau inversé : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }

    return 0;
}