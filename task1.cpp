#include <iostream>
#include <fstream>
using namespace std; //Я ленивый(

int main()
{
    ofstream object;
    object.open("pract.txt");
    object << "Свое сообщение";
    object.close();
    return 0;
}