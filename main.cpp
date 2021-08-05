#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

#include <fstream>

using std::ifstream;
using namespace std;

#include "Iris.h"
#include <cstdlib>
#include <sstream>
#include <string>
// למה יש פה שגיאה אין לי שמץ
string theType(Iris iris, Iris[] others){
    int[others.length] distances;
    for (int i = 0; i < others.length; ++i) {
        iris.getDistance(others[i]);
    }
    // עכשיו למצוא את ה k הכי נמוכים ולספור את הטיפוסים של others במקומות של מה שמצאנו
}
int main(int k, char **pathU, char** pathC) {
    char *myText;
    ifstream classified(reinterpret_cast<FILE *>(pathC));
    ifstream unClassified(reinterpret_cast<FILE *>(pathU));
    string output1 = std::strtok(myText, ",");
    string output2 = std::strtok(nullptr, ",");
    std::cout << output1 << output2;
    int place=0;
    Iris[] irises;
    // אתה קולט כל פעם שורה אחת ועושה לה strtok
    //  כדי לקלוט את הנתונים שלה וליצור עצם חדש מסוג אירוס במערך
    // יש מצב שעדיף להשתמש במבנה נתונים אחר כי לא ידוע לנו הגודל בהתחלה
    // משהו לא עובד לי בסינטקס ואני לא מבין מה קורה פה בכל מקרה
    while (std::move(std::getline(classified, myText))) {
        string x = std::strtok(std::getline(classified, myText), ",");
        string y = std::strtok(nullptr, ",");
        string z = std::strtok(nullptr, ",");
        string w = std::strtok(nullptr, ",");
        string type = std::strtok(nullptr, ",");
        irises[place] = new Iris(x, y, z, w, type);
        place++;
    }
    classified.close();
    return 0;
}