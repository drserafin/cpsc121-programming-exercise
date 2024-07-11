#include <string>
#include <iomanip>
#include <sstream>
#include<iostream>

std::string military_to_regular_time(int military_time) {
    std::string amORpm;
    int hour = military_time / 100;x
    int minute = military_time % 100;

    if (hour == 0) {

        hour = 12;
        amORpm = "AM";
    } else if (hour < 12) {

        amORpm = "AM";
    } else if (hour == 12) {

        amORpm = "PM";
    } else {

        hour = hour - 12;
        amORpm = "PM";
    }

    // Format the minutes to always have two digits
    std::ostringstream minuteStream;
    minuteStream << std::setw(2) << std::setfill('0') << minute;
    std::string minuteStr = minuteStream.str();


    // Return the formatted time string
    return std::to_string(hour) + ":" + minuteStr + " " + amORpm;
}
