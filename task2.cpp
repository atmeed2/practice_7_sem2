#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string line;

    ifstream fin("pract.txt");
    while (fin >> line)
        {
            cout << line << endl;
        }

    fin.close();

    return 0;
}