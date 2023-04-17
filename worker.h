#pragma once
#include "human.h"
#include <iostream>
class Worker : public Human {
public:
  Worker(std::string name, int age, std::string employment);
  std::string employment() override;

private:
  std::string _employment;
};
