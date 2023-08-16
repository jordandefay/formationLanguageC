#include <stdio.h>

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
