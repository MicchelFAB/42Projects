#include "SpellBook.hpp"


SpellBook::SpellBook(){

}
SpellBook::~SpellBook(){
	std::map<std::string, ASpell *>::iterator it_begin = magic.begin();
	std::map<std::string, ASpell *>::iterator it_end = magic.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	magic.clear();
}

void SpellBook::learnSpell(ASpell *new_spell){
	if (new_spell)
		if (magic.find(new_spell->getName()) == magic.end())
			magic.insert(std::pair<std::string, ASpell *>(new_spell->getName(), new_spell->clone()));
}
void SpellBook::forgetSpell(std::string const &sname){
	std::map<std::string, ASpell *>::iterator it = magic.find(sname);
	if(it != magic.end()){
		delete it->second;
	magic.erase(it);}
}

ASpell* SpellBook::createSpell(std::string const &sname){
	std::map<std::string, ASpell *>::iterator it = magic.find(sname);
	if(it != magic.end())
		return magic[sname];
	return NULL;
}