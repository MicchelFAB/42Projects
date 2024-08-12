#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title){
	this->name = name;
	this->title = title;
	std::cout << getName() << ": This looks like another boring day.\n";
}
Warlock::~Warlock(){
	std::cout << getName() << ": My job here is done!\n";
}
std::string const &Warlock::getName() const{ return(this->name);}
std::string const &Warlock::getTitle() const{ return(this->title);}
void Warlock::setTitle(std::string const &wtitle){title = wtitle;}
void Warlock::introduce() const{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!\n";
}

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }