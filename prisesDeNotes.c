NYUUULLLKSLFNHLKCH

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

//

int main(void)
{
	float prix = 123.43;

	printf("Le prix est de %.2f euros.\n", prix); // pour afficher un flottant avec deux chiffres aprés la virgule

	return 0;
}

//Pour déclarer une variable constante :

int main(void)
{
	const float PI = 3.14;
	printf("PI = %.2f\n.", PI);
	return 0;
}

//Pour stocker une variable dans la RAM processeur

int maint(void)
{
	register int nombre = 5;
	volatile int autre_nombre = 10;
	return 0;
}

/*
maVariable : contenu de la variable (exemple maVariable = 15)
&maVariable : adresse où est stockée la variable
*/

int main(void)
{
int ageUtilisateur = 0;

printf("Quel âge avez-vous ?");
scanf("%d", &ageUtilisateur);

printf("Vous avez %d ans.\n", ageUtilisateur);

return 0;
}

//

int main(void)
{
	signed char lettre = 'A';

	printf("Entrez une lettre : \n");
	scanf("%c", &lettre);
	printf("Lettre choisie => %c\n", lettre);

	return 0;
}
