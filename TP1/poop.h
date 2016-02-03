#ifndef ARBREBINAIRE_H__
#define ARBREBINAIRE_H__
#include <iostream>

template <class T>
class ArbreBinaire
{
public:
	ArbreBinaire(); // Construit un arbre vide
	~ArbreBinaire(); // Libere toute la memoire allouee
	void Ajouter(const T& valeur); // Ajouter un item
	void Enlever(const T& valeur); // Enlever un item
	bool Contient(const T& valeur) const; // Retourne vrai si l' arbre contient l' item recherche
	int Nombre() const; // Retourne le nombre d' items dans l' arbre
	const T& Minimum() const; // Retourne la plus petite valeur
	const T& Maximum() const; // Retourne la plus grande valeur
	void AfficherCroissant() const; // Affiche le contenu de l' arbre en ordre croissant ( avec un espace entre chaque item )
	void AfficherDecroissant() const; // Affiche le contenu de l' arbre en ordre decroissant ( avec un espace entre chaque item )
private:
	// ...
};

#endif

template<class T>
inline ArbreBinaire<T>::ArbreBinaire()
{
}

template<class T>
inline ArbreBinaire<T>::~ArbreBinaire()
{
}

template<class T>
inline void ArbreBinaire<T>::Ajouter(const T & valeur)
{
}

template<class T>
inline void ArbreBinaire<T>::Enlever(const T & valeur)
{
}

template<class T>
inline bool ArbreBinaire<T>::Contient(const T & valeur) const
{
	return false;
}

template<class T>
inline int ArbreBinaire<T>::Nombre() const
{
	return 0;
}

template<class T>
inline const T & ArbreBinaire<T>::Minimum() const
{
	// TODO: insérer une instruction return ici
}

template<class T>
inline const T & ArbreBinaire<T>::Maximum() const
{
	// TODO: insérer une instruction return ici
}

template<class T>
inline void ArbreBinaire<T>::AfficherCroissant() const
{
}

template<class T>
inline void ArbreBinaire<T>::AfficherDecroissant() const
{
}
