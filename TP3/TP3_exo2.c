#include<stdio.h>
#define N 3
int somme_diag1(int mat[N][N])
{
	int i;
	int s1=0;
	for(i=0;i<N;i++)
           s1=s1+mat[i][i];
	return s1;
}

int somme_diag2(int mat[N][N])
{
	int i;
	int s2=0;
		for(i=0;i<N;i++)
		s2=s2+mat[i][N-i-1];
	return s2;
}

int somme_ligne(int mat[N][N],int i)
{
		int b;
		int sommeligne=0;
		for(b=0;b<N;b++)
			sommeligne=sommeligne+mat[i][b];
		return sommeligne;
}

int somme_colonne(int mat[N][N],int i)
{
		int j;
		int sommecolonne=0;
		for(j=0;j<N;j++)
			sommecolonne=sommecolonne+mat[j][i];
		return sommecolonne;
}
		
void main()
{	
	int i,j;
	int mat[N][N];
	int sommeligne,sommecolonne;
	int S,s1,s2;

	printf("donnez la matrice");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%i",&mat[i][j]);
		s1=somme_diag1(mat);
		s2=somme_diag2(mat);
	if(s1!=s2)
		printf("Cette matrice n’est pas une matrice magique");
	else 
	{
		S=s1;
		for(i=0;i<N;i++)
			sommeligne=somme_ligne(mat,i);
			if(S!=sommeligne)
				printf("Cette matrice n’est pas une matrice magique");
			else
			for(i=0;i<N;i++)
			sommecolonne=somme_colonne(mat,i);
			if(S!=sommecolonne)
				printf("Cette matrice n’est pas une matrice magique");
				else
					printf("Cette matrice est une matrice magique");
	}
}				
