#include <unistd.h>
#include <stdio.h>

int main()
{
	int nombre,index = 1,somme = 0;

	while (index <= 10){
	printf("Entrer un nombre: %d\n",index);
	scanf("%d", &nombre);
	if (nombre > 0)
	somme += nombre;
	index++;
	}

	printf("La somme des nombres positifs: %d\n", somme);

	return 0;
}

