#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Basics of strings
    string str = "Hello, World!";
    cout << "Initial string: " << str << endl;

    // Modifying the string
    str[7] = 'W';
    cout << "Modified string: " << str << endl;

    // Appending to the string
    str += " How are you?";
    cout << "Appended string: " << str << endl;

    // Finding a substring
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }

    // Extracting a substring
    string subStr = str.substr(7, 5); // Extract "World"
    cout << "Extracted substring: " << subStr << endl;

    // String length
    cout << "Length of the string: " << str.length() << endl;

    // Iterating through the string
    cout << "Characters in the string: ";

    for (char c : str) {
        cout << c << ' ';
    }
    cout << endl;

    // Clearing the string
    str.clear();
    cout << "String after clearing: '" << str << "'" << endl;
    cout << "Length after clearing: " << str.length() << endl;

    

    return 0;
}