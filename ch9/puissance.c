#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int nombre;
	int puissance;

	printf("Entrer un nombre  : \n");
	scanf("%d",&nombre);

	printf("Entrer une  puissance : \n");
	scanf("%d",&puissance);

	int totale = nombre;
				        
	while ( puissance > 1 )
	{
		totale *= nombre;
		puissance--;
	}

	printf("La puisance de votre nombre est :%d\n", totale);
	return 0;

}

