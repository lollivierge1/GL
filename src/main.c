//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)

{
	unsigned char bin[10] =
	{0,1,2,3,4,5,6,7,8,9};
	
	unsigned char seuil = 5;
	unsigned char i=0;
	{
		for (i=0; i<10; i=i+1)
		{
						
	if (bin[i]>seuil)
		bin[i]=1;
		
	else bin[i]=0;
		}			
	
	}
						
						
						
    return 0;
}
