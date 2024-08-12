#ifndef SpellBook_HPP
# define SpellBook_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook{
	private:
		SpellBook(SpellBook const &ref);
		SpellBook &operator=(SpellBook const &ref);

		std::map<std::string, ASpell *> magic;
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *new_spell);
		void forgetSpell(std::string const &sname);
		ASpell* createSpell(std::string const &sname);
};

#endif