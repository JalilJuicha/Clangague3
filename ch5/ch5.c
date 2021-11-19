#include <stdio.h>
int main()
{ 
	long n, v, s = 0;
	
	printf("Donner un nombre : ");
	scanf("%ld", &n);
					
	do{
		v = n % 10;
		n = n /10;
		s = s * 10 + v;
	  }
	while(n != 0);
						
	printf("Son inverse est : %ld\n", s);
	return 0;					
}

