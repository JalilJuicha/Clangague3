#include<stdio.h>
#include<unistd.h>

int	main()
{
	int ligne;
	int i , j;
	printf("Entrer le nombres de lignes : \n");
	scanf("%d",&ligne);
	
	for (i=0; i<ligne;i++)
		{ for(j=0;j<i+1;j++)
			{ 
				printf("* ");
				printf("\n");
			}
		}
	
	return 0;

}

