#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;

    ofstream object;
    object.open("pract.txt");
    cout << "Ввод: \n";
    cin >> str;

    object << str;

    object.close();
    return 0;
}