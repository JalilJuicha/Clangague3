#include <stdio.h>
#include <unistd.h>

int main()
{
	int number;
	int somme=0;
	int max=0;
		        
	while (1)
	{
		printf("Entrer un nombre : ");
		scanf("%d",&number);
			if(number<=100 && number>0)
			{
				somme = somme + number;
				if(number>max)
				{
					max=number;
				}
			 }
			else if (number == 0)
			{
				printf("la somme : %d \n",somme);
				printf("le max : %d \n",max);
				break;
			}
								        
			}
			    

	return 0;
}


