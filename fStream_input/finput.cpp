#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("data.txt");
    fout << "This is a test line." << endl;
    fout.close();

    string line;
    ifstream fin("data.txt");
    if (!fin.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    while(getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
}