//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char phrase[100]= "je m'appelle luc ollivier et j'ai 18 ans";
	char chaine[100];
	char prenom [100];
	unsigned char nom;
	unsigned char age;
	
	printf("%s", phrase);
	scanf ("%s", chaine);
	sprintf (phrase, "prenom, nom, age");
	sscanf(phrase,"%*s %*s %s %s %*s %*s %u %lu", prenom, &nom, &age);
	
    return 0;
}
