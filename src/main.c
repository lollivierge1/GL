//  Copyright (c) 2018 Luc Ollivier
//

#include <userint.h>
//#include "my_header.h"
#include <ansi_c.h>

	

int main(void)
{
	
	char ligne1[80] = "Nom: pentagone_B";
	char ligne2[80] = "Nb points: 5"; 
	char ligne3[80] = "Coordonnees: 10 20 30 20 30 40 43 53 -1 65";

	char nom_fig[20]; 
	int x[5] = {0,0,0,0,0};
	int y[5] = {0,0,0,0,0}; 
	unsigned long int nb_pts;
	
	sscanf (ligne1, "%*s %s", nom_fig);
	sscanf (ligne2, "%*s %*s %d", &nb_pts);   
	sscanf (ligne3, "%*s %d %d %d %d %d %d %d %d %d %d", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]);

	
	char messageErreur[80]; 
	for (int i=0; i<5; i++)
	{
		if ((x[i] == -1  && y[i] != -1) || (x[i] != -1  && y[i] == -1 ))
		{ sprintf (messageErreur, "Les coordonnees sont incorrectes");
		  MessagePopup ("Attention" , messageErreur);
		}
	}	
	
	

	char message[80];
	   	sprintf (message, " La figure %s possede %d sommets", nom_fig, nb_pts);
     	MessagePopup ("Reponse", message);
	
    return 0;
}


