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
	if (new_spell)
		if (magic.find(new_spell->getName()) == magic.end())
			magic.insert(std::pair<std::string, ASpell *>(new_spell->getName(), new_spell->clone()));
}
void Warlock::forgetSpell(std::string sname){
	std::map<std::string, ASpell *>::iterator it = magic.find(sname);
	if(it != magic.end()){
		delete it->second;
		magic.erase(it);
	}
}
void Warlock::launchSpell(std::string sname, ATarget const &starget){
	ASpell *spell = magic[sname];
	if (spell)
		spell->launch(starget);
}