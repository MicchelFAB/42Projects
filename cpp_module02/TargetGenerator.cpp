#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){

}
TargetGenerator::~TargetGenerator(){
	std::map<std::string, ATarget *>::iterator it_begin = magic.begin();
	std::map<std::string, ATarget *>::iterator it_end = magic.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	magic.clear();
}

void TargetGenerator::learnTargetType(ATarget *new_spell){
	if (new_spell)
		if (magic.find(new_spell->getType()) == magic.end())
			magic.insert(std::pair<std::string, ATarget *>(new_spell->getType(), new_spell->clone()));
}
void TargetGenerator::forgetTargetType(std::string const &sname){
	std::map<std::string, ATarget *>::iterator it = magic.find(sname);
	if(it != magic.end()){
		delete it->second;
	magic.erase(it);}
}

ATarget* TargetGenerator::createTarget(std::string const &sname){
	std::map<std::string, ATarget *>::iterator it = magic.find(sname);
	if(it != magic.end())
		return magic[sname];
	return NULL;
}