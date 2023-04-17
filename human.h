#pragma once

#include "ihuman.h"
#include <iostream>

class Human : public Ihuman {
public:
  Human(std::string name, int age);

  std::string name() override;
  int age() override;

private:
  std::string _name;
  int _age;
};
