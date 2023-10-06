#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251");
    ofstream fout("test.tx");
    if (!fout)
    {
        cout << "Файл открыть невозможно";
        return 1;
    }
    
    string inputString;
    getline(cin, inputString);
    while (inputString.size() != 0)
    { 
        fout << inputString << endl;
        getline(cin, inputString);
    }
}