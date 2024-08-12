#ifndef Warlock_HPP
# define Warlock_HPP

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &ref);
		Warlock &operator=(Warlock const &ref);

		SpellBook book;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &wtitle);

		void introduce() const;

		void learnSpell(ASpell *new_spell);
		void forgetSpell(std::string sname);
		void launchSpell(std::string sname, ATarget const &starget);

};


#endif