#ifndef Fwoosh_HPP
# define Fwoosh_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell{
	public:
		Fwoosh();
		~Fwoosh();

		ASpell *clone() const;
};

#endif