#include "human.h"

Human::Human(std::string name, int age) : _name{name}, _age{age} {}

std::string Human::name() { return _name; }

int Human::age() { return _age; }
