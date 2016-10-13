#include <stdio.h>
#define N 8


char init_matrice(char mat[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		   mat[i][j]='.';
}

void afficher_matrice(char mat[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
	 	for(j=0;j<N;j++)
		    printf("%c",mat[i][j]);
	   printf("\n");
	}
	
}

int coord_valides(int a,int b)
{
	if(a>1||a<N||b>1||b<N)
	return 1;
	else	
	return 0;
}

void tour(char mat[N][N],int a,int b)
{
	int i,j;
		for(i=0;i<N;i++)
			mat [i][b]='*';
		for(j=0;j<N;j++)
			mat [a][j]='*';
	mat[a][b]='t';
}

void main()
{
	char mat[N][N];
	int a,b;
	printf("donnez deux entiers entre 1et8");
	scanf("%i",&a);
	scanf("%i",&b);
	init_matrice(mat);
	 if ( coord_valides(a,b) == 1) {
		tour(mat,a,b);
		afficher_matrice(mat);
	} else 
		printf("Coord non valide !!! ");
}		
