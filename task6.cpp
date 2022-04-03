#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;

    ifstream fin("pract.txt");

    while(getline(fin, line))
        {
            cout << line << endl;
        }

    fin.seekg(0,ios_base::end);
    cout << "Размер файла: " << fin.tellg();

    fin.close();

    return 0;
}