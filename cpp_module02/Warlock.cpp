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

void Warlock::learnSpell(ASpell *new_spell){
	book.learnSpell(new_spell);
}
void Warlock::forgetSpell(std::string sname){
	book.forgetSpell(sname);
}
void Warlock::launchSpell(std::string sname, ATarget const &starget){
	ATarget const *tagt = 0;
	if (tagt == &starget)
		return;
	ASpell *spell = book.createSpell(sname);
	if (spell)
		spell->launch(starget);
}