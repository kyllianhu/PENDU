#ifndef LETTRE_H
#define LETTRE_H


class lettre
	{
	private:
		char l;
		bool v;
		static char cache;

	public:
		// Crée aléatoirement une lettre majuscule comprise entre A et Z
		// Par défaut, la lettre est visible
		lettre();

		// Crée une lettre majuscule comprise entre A et Z d'après la valeur
		// passé en paramètre. Si valeur minuscule, passage automatique
		// en majuscule, si autre valeur, la valeur 'A' est prise
		// Par défaut, la lettre est visible
		lettre(char);

		// Renvoie la lettre majuscule en tenant compte
		// de sa visibilité
		char get_char(bool=false);

		// permet de cacher ou montrer une lettre
		void set_visible(bool);

        // permet de choisir le caractère de cache
        void set_cache(char);

        // permet de voir le caractère de cache
        char get_cache();


    };

#endif // LETTRE_H
