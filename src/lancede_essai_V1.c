#include <ansi_c.h>
#include <TP_lib.h>

int main(void) 
 {
	 short resultat =0;
	 int somme =0;
	 while (resultat !=1)
	 {
		 resultat = LancerDe();
		 
		 printf("Resultat %d \n", resultat);
		 
		 if (resultat ==2 || resultat ==4 || resultat == 6) { somme = somme + resultat;}
		 if (resultat ==3) { somme = somme *2;}
		 if (resultat ==5) 
		 	{ 
			 somme = somme -2;
			 	if (somme <0) {somme = 0;}
		 	} 
		printf("Somme =  %d \n", somme);	
	 }
	 
	 return 0;
 }	 
