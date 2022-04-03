#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string s;
    ifstream file("pract.txt");

    for(file >> s; !file.eof(); file >> s)
        cout << s << endl;
    if (file.eof())
        cout << "Конец\n";

    file.close();

    return 0;
}