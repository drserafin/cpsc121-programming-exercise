#include<iostream>
#include<vector>
#include "minimum.h"

int IndexOfMinimumElement(const std::vector<double>& input) {
    if (input.size() == 0) {
        // Handle case where input vector is empty
        return -1; // Or throw an exception, depending on your design
    }

    double minimumValue = input[0];
    int minimumIndex = 0;

    for (int i = 1; i < input.size(); ++i) {
        if (input[i] < minimumValue) {
            minimumValue = input[i];
            minimumIndex = i;
        }
    }

    return minimumIndex;
}
