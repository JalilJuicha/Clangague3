#include<unistd.h>
#include<stdio.h>
#include<stdbool.h>


int	main()
{
	int i,n,m;

	printf("Entrer un nombre :\n");
	scanf("%d",&n);
	
	if(n==1 || n==0)
	m=1;
		for(i=2;i<n;i++)
	{
		if(n%i==0 )
		{m=1;
		break;
		}
	}
	if(m==1)
	printf("%d N'est pas premier.\n",n);
	else printf("%d est premier .\n",n);


	return 0;
}

