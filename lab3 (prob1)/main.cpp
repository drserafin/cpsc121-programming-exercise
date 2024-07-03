#include <iostream>
#include "time_converter.h"

bool isValidMilitaryTime(int military_time) {
    int minute = military_time % 100;

    // Check if military_time is within valid range and if minutes are valid
    if (military_time < 0 || military_time > 2400 || minute >= 60) {
        return false;
    }

    return true;
}

int main() {
    int military_time;
    int minute;

    std::cout << "Please enter the time in military time (0000 to 2400): ";
    std::cin >> military_time;

    // Check if the input military_time is valid
    if (military_time < 0 || military_time > 2400) {
        std::cout << "Please enter a valid 4-digit number between 0000 and 2400" << std::endl;
        return 0;
    }

    minute = military_time % 100;

    if (minute >= 60) {
        std::cout << "Please select a minute value between 00 and 59." << std::endl;
        return 0;
    }

    std::cout << "The equivalent regular time is: " << military_to_regular_time(military_time) << std::endl;

    return 0;
}
