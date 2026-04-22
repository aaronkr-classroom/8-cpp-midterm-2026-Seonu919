#ifndef GUARD_functions_h
#define GUARD_functions_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student_info {
	string name;
	vector<double> grades;
};


double calculateAverage(vector<double>);

#endif
