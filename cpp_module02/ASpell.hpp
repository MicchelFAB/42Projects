#ifndef ASpell_HPP
# define ASpell_HPP

#include <iostream>

class ATarget;

class ASpell{
	private:
		std::string name;
		std::string effects;

	public:
		ASpell();
		ASpell(ASpell const &ref);
		ASpell &operator=(ASpell const &ref);
		ASpell(std::string const &name, std::string const &title);
		virtual ~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		void launch(ATarget const &starget) const;

		virtual ASpell *clone() const = 0;
};

#include "ATarget.hpp"

#endif