#include <iostream>
#include <string>
using namespace std;

//gpt answer

// Function to calculate the transaction completion time
string calculateCompletionTime(string loginTime, int othCustomers, int serverDelay) {
    int hh, nm, xm;
    sscanf(loginTime.c_str(), "%d:%d %s", &hh, &nm, &xm);

    // Check if login time is within the Tatkal booking window (8:00 - 9:00)
    if (hh != 8 || (nm < 0 || nm >= 60) || (xm != 'a' && xm != 'p')) {
        return "Failure, 09:00";
    }

    // Calculate the time required for the customer's transaction
    int minutes = nm + serverDelay;
    if (minutes >= 60) {
        minutes -= 60;
        hh++;
    }

    // Check if the customer can book a Tatkal ticket
    if (othCustomers >= 50) {
        return "Failure, 09:00";
    } else if (minutes >= 60) {
        return "Failure, 09:00";
    } else {
        // Increment the number of other customers
        othCustomers++;
        // Format the completion time
        char completionTime[9];
        sprintf(completionTime, "%02d:%02d %c.m", hh, minutes, xm);
        return "Success, " + string(completionTime);
    }
}

// Main function
int main() {
    string loginTime;
    int othCustomers, serverDelay;

    // Input
    cout << "Enter loginTime (hh:nm xm): ";
    getline(cin, loginTime);
    cout << "Enter the number of other customers logged in: ";
    cin >> othCustomers;
    cout << "Enter serverDelay in seconds: ";
    cin >> serverDelay;

    // Call the ticketBook function and print the result
    string result = calculateCompletionTime(loginTime, othCustomers, serverDelay);
    cout << "Output: " << result << endl;

    return 0;
}
