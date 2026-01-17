// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
string name = "Ahmed Yar", name2 = "Ali";
cout << "Length:" << name.length() << endl;

cout << "0 for empty, 1 for non-empty: " << name.empty() << endl;

cout << "Append in name: " << name.append(" Rasheed") << endl;

cout << "Substr(0, 7): " << name.substr(0, 7) << endl;

cout << "find(Yar): " << name.find("Yar") << endl;

cout << "compare(name, name2): " << name.compare(name2) << endl;

// name.clear();
// cout << "clear(): " << name << endl;

// cout << "insert(4, c++): " << name.insert(5," C++ ") << endl;

// cout << "replace(7, 4, c++): " << name.replace(7, 4,"C++") << endl;

// cout << "erase(2,3): " << name.erase(2, 5) << endl;


return 0;
}