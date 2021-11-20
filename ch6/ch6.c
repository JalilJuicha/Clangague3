#include<stdio.h>
#include<stdlib.h>
int main()
{
	    int nb,p,i,test;
	    printf("Entrez un nombre:\n");
		scanf("%d",&nb);

		for(p=2;p<=nb;p++)
		{test=1;
			for(i=2;i<p;i++)
			{
			if(p%i==0)
				{test=0;
			break;
				}	
			}								      
			if(test==1)
			printf("Les nombres premiers :%d\n",p);

		}

		return 0;
}
