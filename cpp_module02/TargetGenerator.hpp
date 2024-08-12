#ifndef TargetGenerator_HPP
# define TargetGenerator_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator{
	private:
		TargetGenerator(TargetGenerator const &ref);
		TargetGenerator &operator=(TargetGenerator const &ref);

		std::map<std::string, ATarget *> magic;
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *new_spell);
		void forgetTargetType(std::string const &sname);
		ATarget* createTarget(std::string const &sname);
};


#endif