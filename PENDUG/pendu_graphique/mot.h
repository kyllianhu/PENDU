#ifndef MOT_H
#define MOT_H

#include "lettre.h"
#include <vector>
#include <string>

class mot
	{
	private:
		std::vector <lettre> m;
		static std::string genere();

	public:
		// constructeur qui construit un mot
		// aléatoire
		mot(std::string = genere());

		// méthode renvoyant une chaîne de caractères
		// correspondant au vector de lettres
		std::string get_str();

		// méthode permettant de cacher ou montrer
		// toutes les lettres d'un mot
		void set_visible(bool);

		// méthode permettant de cacher ou montrer
		// une lettre d'un mot d'après sa position
		void set_visible(unsigned int, bool);

		// méthode permettant de cacher ou montrer
		// une lettre d'un mot d'après son contenu
		bool set_visible(char, bool);

        // méthode indiquant que toutes les lettres
        // du mot sont visibles
        bool is_visible();

    };


#endif // MOT_H
