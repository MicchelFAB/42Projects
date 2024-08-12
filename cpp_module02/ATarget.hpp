#ifndef ATarget_HPP
# define ATarget_HPP

#include <iostream>

class ASpell;

class ATarget{
	private:
		std::string type;

	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &ref);
		ATarget &operator=(ATarget const &ref);
		virtual ~ATarget();

		std::string const &getType() const;

		void getHitBySpell(ASpell const &spell) const;

		virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"

#endif