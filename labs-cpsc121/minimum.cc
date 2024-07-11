#include<iostream>
#include<vector>
#include "minimum.h"


class Minimum{

public:
 int IndexOfMinimumElement(const std::vector<double>& input){

    if (input.empty()){
        std::cout << "The vector is empty" << std::endl;
        return -1;
    }

    int minIndex = 0; //initialize the index of the minimum element to 0
    double minValue = input[0]; //initialize the minimum value to the first element of the vector

    for (int i = 1; i < input.size(); i++){
        if (input[i] < minValue ){
            minValue = input[i];
            minIndex = i;
        }
    }
    return minIndex;
 }

    

 };