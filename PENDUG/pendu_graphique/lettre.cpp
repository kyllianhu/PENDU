#include "lettre.h"
#include <stdlib.h>
#include <time.h>

char lettre::cache = '.';

lettre::lettre()
	{
	static bool init=false;
	if(init==false)
		{
		srand((unsigned int)time(nullptr));
		init=true;
		}
	l = rand() % 26 + 65;
	v = true;
	}

lettre::lettre(char c)
	{
	// si c'est une minuscule
	// on la passe en majuscule
	if(c>='A' && c<='Z')
		{
		l = c;
		}
	else
		{
		if(c>='a' && c<='z')
			{
			l = c & 223;
			}
		else
			{
			l = 'A';
			}
		}
	v = true;
	}

char lettre::get_char(bool b)
	{
	char c;
	if(b)
		{
		c=l;
		}
	else
		{
		c = v?l:cache;
		}
	return c;
	}

void lettre::set_visible(bool b)
	{
	v=b;
	}

void lettre::set_cache(char c)
    {
    if((int)c > 30)
        {
        cache=c;
        }
    }

char lettre::get_cache()
    {
    char c = cache;
    return c;
    }
