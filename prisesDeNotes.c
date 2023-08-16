#include <stdio.h>
// Pour compiler sous linux : gcc <nom_du_fichier_entree> -o <nom_du_fichier_sortie>
/*
On peut écrire
des commentaires
sur plusieurs lignes
de cette maniére
*/

// Pour afficher un print sur la console
int main(void)
{
	printf("Bjr tout le monde !\n");
	return 0;
}

// LES VARIABLES
/* Les mots réservés sous C :

auto ; enum ; return ; unsigned
break ; extern ; short ; void
case ; float ; signed ; volatile
char ; for ; sizeof ; while
const ; goto ; static
default ; if ; struct
do ; int ; switch
double ; long ; typedef
else ; register ; union
*/
int main(void)
{
	//Déclaration d'une variable de type entier (int)
	// =, ne veut pas dire égal mais c'est seulement une affectation
	int aireDuCarre = 0; //aireDuCarre sera stocké (par exemple dans 0xF500DA)

	float prixReservation = 15.345;
	signed char = 120;
	signed char = 'A';
	return 0;
}
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	//Déclaration et affectation d'une variable de type entier (int)
	int nombre_entier = (int)140.23;
	int autre_nombre = 23;

	/*
					%d : nombre entier(int)
					%f : nombre flottant (float)
					%c : caractére (char)
					%s : chaîne de caractéres (texte)
	*/
	printf("Le nombre est %d ou %d.\n", nombre_entier, autre_nombre);
	return 0;
}
