#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input = "10 20 30 40 50";
    istringstream iss(input);

    int num;
    while (iss >> num) {
        cout << "Parsed number: " << num << endl;
    }

    return 0;
}
