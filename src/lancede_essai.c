#include <ansi_c.h>
#include <TP_lib.h>


int main(void) 
 {
	 short resultat, i=0;
	 while (i<10)
	 {
		 resultat = LancerDe();
		 i++;
		 printf("Lancer numero %d %d \n", i, resultat);
	 }
	 
	 return 0;
 }	 
