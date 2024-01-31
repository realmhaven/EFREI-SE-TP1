#include <stdio.h>
#include "gestion_tableaux.h"

#define DIM1 3
#define DIM2 3

int main2(void)
{
	int** mon_tab = NULL;

	afficher_tab2D(mon_tab, DIM1, DIM2);

	//mon_tab = alloc_2D(DIM1, DIM2);
	//alloc_2D_v2_faux(mon_tab, DIM1, DIM2); //NE FONCTIONNE PAS => conduit � une erreur de segmentation
	alloc_2D_v2(&mon_tab, DIM1, DIM2); //On cherche � modifier "mon_tab" dans la fonction => il faut envoyer l'adresse donc
	saisir_tab2D(mon_tab, DIM1, DIM2);
	afficher_tab2D(mon_tab, DIM1, DIM2);

	desalloc_tab2D(&mon_tab,DIM1);

	afficher_tab2D(mon_tab, DIM1, DIM2); //on teste le fait que la fonction ne bug pas avec un pointeur non valide

	return 0;
}
