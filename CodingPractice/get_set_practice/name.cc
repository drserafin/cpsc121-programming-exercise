#include "name.h"
#include <iostream>

// Constructor definition
Name::Name(const std::string &name) : name_(name) {}


void Name::setName(const std::string &name) {
    name_ = name;
}

std::string Name::getName() const {
    return name_;
}

// Method to print the name
void Name::printName() const {
    std::cout << "Hello, " << name_ << "!" << std::endl;
}