#include<iostream>

class heightTest{

public:
    // Constructor declaration and definition
    heightTest(int h) : height(h) {
        // Constructor logic to check height
        if (height < 55) {
            std::cout << "You must be at least 55 inches to safely ride the Rollercoaster.\n";
            std::cout << "Safety is our first priority. Unfortunately, we can't let you ride yet.\n";
        } else {
            std::cout << "Congratulations! You are tall enough to ride!\n";
        }
    }
private:

    int height;
};

int main(){

    int h;
    std::cout << "You must be at least 55 inches to saftely ride the RollerCoaster \n";
    std::cout << "Please enter your height in inches: ";
    std::cin >> h;
    heightTest myObject(h);

  return 0;
};