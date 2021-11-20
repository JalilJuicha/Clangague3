#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int nombre;
	int index = 0;

	int number , first = 1 , second = 0, third;

	printf("Entrer le nombre de la suite : \n");
	scanf("%d", &nombre);
		while (index != nombre)
		{
			third = first + second;
			first = second;
			second = third;
			index ++;
	 	}

	printf("le nième terme de la suite est :%d\n", first);
	return 0;
}

