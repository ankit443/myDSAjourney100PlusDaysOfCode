#include <iostream>
#include <string>

using namespace std;

string replaceSpacesWith40(const string &inputString) {
    string modifiedString;
    
    for (char ch : inputString) {
        if (ch == ' ') {
            modifiedString += "@40";
        } else {
            modifiedString += ch;
        }
    }
    
    return modifiedString;
}

int main() {
    string inputString = "Coding Ninjas";
    // cin>>inputString;
    cout << "Original String: " << inputString << endl;
    
    string modifiedString = replaceSpacesWith40(inputString);

    cout << "Modified String: " << modifiedString << endl;

    return 0;
}
