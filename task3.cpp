#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string line;

    ifstream fin("pract.txt");
    int n;
    cout << "Число строк:\n";
    cin >> n;
    for (int i = 1; i <= n; ++i){
        getline(fin, line);
        {
            cout << line << endl;
        }
    }
    
    fin.close();

    return 0;
}

//Read

int readMethod() {

    int n = 50;
    
    char* buffer = new char[n+1]; buffer[n]=0;
    ifstream file("pract.txt");

    file.read(buffer,n);
    cout << buffer;
    file.close();

    return 0;
}