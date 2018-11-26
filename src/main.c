//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)

{
	unsigned char bin[10] =
	{0,1,2,3,4,5,6,7,8,9};
	
	unsigned char seuil = 5;
	unsigned char i=0;
	
		for (i=0; i<10; i=i+1)
		{
						
	if (bin[i]>seuil)
		bin[i]=1;
		
	else bin[i]=0;
	printf (" Element %d devient %d \n", i ,bin[i] );
		}
		// fin question 1

		
		int sat[10];
		int SEUILH = 200;
		int SEUILB = 100;
		
		// initialisaion  tableau
		for (int j=0; j<10; j++)
		{
			sat[j]= rand()%300 - 150;
			printf (" Element %d est %d \n", j ,sat[j] ); 
			
			if (sat[j]>SEUILH)
			{
				   sat[j] = SEUILH;
			}
			else if (sat[j]<SEUILB)
			{
				   sat[j] = SEUILB;
			  }
			printf (" Element %d devient %d \n", j ,sat[j] );
		}
		  // fin question 2   
		  
		
		  		int dist[10];
				int dist1[10];
				
		// initialisaion  tableau
		for (int k=0; k<10; k++)
		{
			dist[k]= rand()%300;
			printf (" Element %d est %d \n", k ,dist[k] ); 
		}
		
		dist1[0] = dist[0];
		
			   for (int m=1; m<10; m++)
			   {
				   dist1[m]=dist[m]-dist[m-1];
				   printf (" Element %d devient %d \n", m ,dist1[m]); 
			   }
		
			   for (int n=0; n<10; n++)
			   {
				   dist[n]=dist1[n];
				   printf (" Element %d devient %d \n", n ,dist[n]); 
			   }
		
		  // fin question 3   
		
		  int N=10;
		  int a[N], b[N];
		  
		  	// initialisaion  tableau
		
		for (int p=0; p<N; p++)
		{
			a[p]= rand()%300 - 150;
			printf (" Element %d dans a est %d \n", p ,a[p] ); 
		}
		  for (int q=0; q<N; q++)
		  {
			  b[q]=a[(N-1)-q];
			  printf (" Element %d dans b est %d \n", q ,b[q] );
		  }
		  
		  // fin question 4 
		  

		  int miroir[N];
		  
		  	// initialisaion  tableau
		
		for (int r=0; r<N/2; r++)
		{
			miroir[r]= rand()%300 - 150;
			printf (" Element %d dans miroir est %d \n", r ,miroir[r] ); 
		}
		
		  for(int t=0; t<N/2; t++)
		  {
			  miroir[(N/2) + t] =   miroir[((N/2)-1) -t];
					 
		   }
				  
				for(int z=0; z<N; z++)
		  {
				 printf (" Element %d dans miroir est %d \n", z ,miroir[z] );
		  }
		  
		   // fin question 5
		  
 return 0;		
	
}

