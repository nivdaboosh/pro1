#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

#include <fstream>
#include <vector>

using std::ifstream;
using namespace std;

#include "Iris.h"
#include <cstdlib>
#include <sstream>
#include <string>

string theType(Iris iris, std::vector<Iris> others, int k) {
    std::vector<double> distances;
    for (int i = 0; i < others.size(); ++i) {
        distances[i] = iris.getDistance(others[i]);
    }
    std::sort(distances, k);
    // עכשיו למצוא את ה k הכי נמוכים ולספור את הטיפוסים של others במקומות של מה שמצאנו
}

std::vector<Iris> input(char **path, bool isClassified, std::vector<Iris> others, int k) {
    ifstream file(reinterpret_cast<FILE *>(path));
    std::vector<Iris> irises;
    char *myText;
    int place = 0;
    while (std::getline(file, myText)) {
        double x = std::stod(std::strtok(myText, ","));
        double y = std::stod(std::strtok(nullptr, ","));
        double z = std::stod(std::strtok(nullptr, ","));
        double w = std::stod(std::strtok(nullptr, ","));
        string type;
        if (isClassified) {
            type = std::strtok(nullptr, ",");
        } else {
            Iris helper = Iris(x, y, z, w, "");
            type = theType(helper,others, k);
        }
        irises[place] = Iris(x, y, z, w, type);
        place++;
    }
    file.close();
}

int main(int k, char **pathU, char **pathC) {
    std::vector<Iris> nullVector;
    std::vector<Iris> classified = input(pathC, true, nullVector, k);
    std::vector<Iris> irises = input(pathC, false, classified, k);
    for (int i = 0; i < irises.size(); ++i) {

    }
    return 0;
}