//
// Created by Daniel on 04/08/2021.
//
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

#include <fstream>

using std::ifstream;
using namespace std;

#include <cstdlib>
#include <sstream>
#include <string>
#include <math.h>

#ifndef UNTITLED_IRIS_H
#define UNTITLED_IRIS_H

class Iris{
private:
    double x;
    double y;
    double z;
    double w;
    string type;
public:
    Iris(double x, double y, double z, double w, string type);
    double getDistance(Iris other);
    string getType();
};
#endif //UNTITLED_IRIS_H
