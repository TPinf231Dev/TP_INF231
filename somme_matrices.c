#include<stdio.h>
#include<stdlib.h>
int main(){
	int m, n;
	printf("Entrez le nombre de lignes: ");
	scanf("%d",&m); 
	printf("Entrez le nombre de colonnes: ");
	scanf("%d",&n);
	int P[m][n], Q[m][n], som[m][n];
	printf("Entrez le nombre d'element de la matrice P: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("P[%d][%d]",i,j);
			scanf("%d",&P[i][j]);
		}
	}
	printf("Entrez le nombre d'element de la matrice Q: \n");
	for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                        printf("Q[%d][%d]",i,j);
                        scanf("%d",&Q[i][j]);
                }
        }

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			som[i][j]=P[i][j]+Q[i][j];
		}
	}
	printf("la somme des deux matrices est: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",som[i][j]);
		}
		printf("\n");
	}
	return 0;
}

