#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring and initializing string variables
    string str1 = "Hello, ";
    string str2 = "world!";
    
    // Concatenating strings
    string result = str1 + str2;
    
    // Accessing and printing the concatenated string
    cout << result << endl;
    
    // Finding the length of a string
    cout << "Length of result string: " << result.length() << endl;
    
    // Accessing individual characters in the string
    cout << "First character of result: " << result[0] << endl;
    cout << "Last character of result: " << result[result.length() - 1] << endl;
    
    // Finding a substring
    string sub = result.substr(7, 5); // Starting index: 7, Length: 5
    cout << "Substring: " << sub << endl;
    
    // Modifying a string
    result[7] = 'W';
    cout << "Modified string: " << result << endl;
    
    // Appending to a string
    result.append(" Welcome!");
    cout << "Appended string: " << result << endl;
    
    // Clearing a string
    result.clear();
    cout << "Cleared string: " << result << endl;
    
    // Checking if a string is empty
    cout << "Is result string empty? " << (result.empty() ? "Yes" : "No") << endl;

    return 0;
}
