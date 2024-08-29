#include<iostream>
#include<string>
#include"name.h"

int main(){

    std::string name;

    std::cout << "What is your name? ";
    std::getline(std::cin, name); //use std::getline to read a full line of inptu

    Name myobject(name);

    myobject.printName();

    std::cout << "Enter another name? ";
    std::getline(std::cin, name);

    myobject.setName(name);
    myobject.printName();


    return 0;
}