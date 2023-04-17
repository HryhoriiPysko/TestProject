#pragma once
#include <iostream>

class Ihuman {
public:
  Ihuman();
  virtual std::string name() = 0;
  virtual int age() = 0;
  virtual std::string employment() = 0;
};
