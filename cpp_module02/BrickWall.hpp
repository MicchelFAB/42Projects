#ifndef BrickWall_HPP
# define BrickWall_HPP

#include <iostream>
#include "ATarget.hpp"

class BrickWall: public ATarget{
	public:
		BrickWall();
		~BrickWall();

		ATarget *clone() const;
};

#endif