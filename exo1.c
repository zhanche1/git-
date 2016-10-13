# include<stdio.h>

void creer_fichier()
{ 
  int a;
  int i;
  FILE* fich;
 fich=fopen("donnees.txt","w");
  printf("donnez une suite d'entier positif");
 
  scanf("%i",&a);
  while( a != -1 )
	{	
 	 scanf("%d",&a);
	 fprintf(fich,"%i",a);
	}

fclose(fich);
}

  void main( )
{
  creer_fichier();
}
