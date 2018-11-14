#include <ansi_c.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h


int main(void)

{
	int S1=0;
	unsigned long int S2=0;
	int S3=0;
	int n=12;
	int m=9876;
	int i = 0;
	int S4=0;
	int j=0;
	int res3, res7;
	
	
	while (i <n)
	{    S1=S1 +3*i;
			i++;									  
		 printf(" S1= %d \n",  S1);
	} // fin S1
	
	i = 0;
	
  	while (i <m)
	{    S2=S2 + i;
			i=i+3;
		 printf(" S2= %d \n",  S2);
	} // fin S2

	
		i = 0;
		
	int nombre_aleatoire = 0;
	for(i=0; i<12; i++){
		nombre_aleatoire = rand()%10;
		
		S3 = S3 + nombre_aleatoire;
		printf("%d \n",nombre_aleatoire);
		printf(" S3= %d \n",S3);
	} // fin S3
	
	i=0;
	
		while (i <21)
	{   j++;
	
			res3 = j%3;
			res7 = j%7;
				   
		if (res3 == 0) { S4 = S4 + j; printf("j= %d\n", j); i++;}
		if (res3 !=0 && res7 == 0) { S4 = S4 + j;printf(" j= %d\n", j); i++;}	 
		 printf(" S4=  %d\n", S4);
		 
	
	}   // fin S4
	
	
		
	
	return 0;
}

