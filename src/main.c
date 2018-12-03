//  Copyright (c) 2018 Luc Ollivier
//

#include "my_header.h"
#include "TP_lib_suite.h"


int main(void)

{
	unsigned char joueur[6] =
	{14,48,39,3,7,11};
	
	unsigned char victoire[6];
	short int i,j,g,l;
	short int gain = 0;
	short int tiragmax = 0;
	
	
		for (l=0; l<100; l++)
		{
			initialiserTirage();
			for(g=0;g<6;g++)
			{
				victoire[g] = tirerNumero();
			}
			for (i=0;i<6;i++)
			{
				for (j=0;j<6;j++)
				{
					if(joueur[i]==victoire[j])
					{
						gain++;
					}
				}
			}
			if( tiragmax < gain )
			{
				tiragmax = gain;
			}
			
			gain = 0;
		}	
			 
   return 0;
}

