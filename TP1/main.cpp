#include "ArbreBinaire.h"

int main()
{
	ArbreBinaire<int> a;
	a.Ajouter(8);
	a.Ajouter(3);
	a.Ajouter(1);
	a.Ajouter(6);
	a.Ajouter(4);
	a.Ajouter(7);
	a.Ajouter(10);
	a.Ajouter(14);
	a.Ajouter(13);

	a.AfficherCroissant;
	a.AfficherDecroissant;

	system("pause");
}