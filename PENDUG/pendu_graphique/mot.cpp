#include "mot.h"
#include <fstream>
#include <iostream>

std::string mot::genere()
    {
    std::string s="";
    static bool init=false;
    if(init==false)
        {
        srand((unsigned int)time(nullptr));
        init=true;
        }
    std::ifstream dic("dico.txt");
    if(!dic.is_open())
        std::cout<<"imossible d'ouvrir le fichier en lecture"<<std::endl;
    else
    {
        int pos = rand() % 228000;
        dic.seekg(pos);
        dic>>s;
        dic>>s;
        dic.close();
    }
    return s;
    }

mot::mot(std::string s)
	{
	// Constructeur
    bool ret=false;
    if(!s.empty())
    {
        int i=0;
        while(s[i])
            {
            lettre l(s[i]);
            m.push_back(l);
            i++;
            }
    }
}

std::string mot::get_str()
	{
	std::string s;
	unsigned long taille = m.size();
	for(unsigned long i=0; i<taille; i++)
		{
		s.push_back(m.at(i).get_char());
		}
	return s;
	}

void mot::set_visible(bool b)
    {
    unsigned long taille = m.size();
    for(unsigned long i=0; i<taille; i++)
        {
        m.at(i).set_visible(b);
        }
    }

void mot::set_visible(unsigned int pos, bool b)
	{
	m.at(pos).set_visible(b);
	}

bool mot::set_visible(char c, bool b)
    {
    bool r = false;
    unsigned long taille = m.size();
    lettre l(c);
    c = l.get_char();
    for(unsigned long i=0; i<taille; i++)
        {
        if(m.at(i).get_char(true) == c)
            {
            m.at(i).set_visible(b);
            r=true;
            }
        }
    return r;
    }

bool mot::is_visible()
    {
    bool b = true;
    unsigned long taille = m.size();
    lettre l;
    char c = l.get_cache();
    for(unsigned long i=0; i<taille; i++)
        {
        if(m.at(i).get_char() == c)
            {
            b=false;
            }
        }
    return b;
    }

