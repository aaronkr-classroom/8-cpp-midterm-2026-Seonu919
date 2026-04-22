#include <iostream>
#include <vector>
#include "functions.h"

using std::vector;



double calculateAverage(vector<double> grades) {
    double total = 0;

        for (int i = 0; i < grades.size(); i++) {
            total += grades[i];
        }

    return total / grades.size();
}

