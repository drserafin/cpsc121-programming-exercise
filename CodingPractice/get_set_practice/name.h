#ifndef NAME_H
#define NAME_H

#include <string>

class Name {
public:
    Name(const std::string &name);
    void setName(const std::string &name);
    std::string getName() const;
    void printName() const;

private:
    std::string name_;
};

#endif // NAME_H
