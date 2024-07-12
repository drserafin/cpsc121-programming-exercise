#include<iostream>
#include<vector>
#include"minimum.h"

int main(){
    int size; //declare size for vector

    std::cout << "How many elements? ";
    std::cin >> size;

    std::vector<double> vector(size); //declare vector with size
    for (int i = 0; i < size; i++){ //loop through vector
        double value;
        std::cout << "Element " << i << ": ";
        std::cin >> value;
        vector.at(i) = value; //assign value to vector

    }

    int minimumIndex = IndexOfMinimumElement(vector); //call function from minimum.cc

    std::cout << "The minimum value in your vector is at index " << minimumIndex << ".\n"; //output minimum index
    return 0;

}