#include "worker.h"

Worker::Worker(std::string name, int age, std::string employment)
    : Human(name, age), _employment{employment} {}

std::string Worker::employment() { return _employment; }
