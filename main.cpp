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
int main(int k, char **path) {
    // Create a text string, which is used to output the text file
    string myText;
    ifstream file(reinterpret_cast<FILE *>(path));
    // Use a while loop together with the getline() function to read the file line by line
    while (std::getline(file, myText)) {
        // Output the text from the file
        cout << "p";
        cout << myText;
        // ליצור מחלקת אירוס
    }
    file.close();
    return 0;
}