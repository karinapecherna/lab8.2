#include <iostream>
#include <sstream>
#include <string>
using namespace std;


string FindFirstWordWithA_Iterative(const string& input) {
    istringstream stream(input);
    string word;

    while (stream >> word) {
        if (!word.empty() && word[0] == 'a') {
            return word;
        }
    }

    return "";
}


string GetInputString() {
    string input;
    cout << "The string: ";
    getline(cin, input);
    return input;
}


void PrintResult(const string& result) {
    if (result.empty()) {
        cout << "No words start with a" << endl;
    }
    else {
        cout << "First word start with 'a': " << result << endl;
    }
}

int main() {
    string input = GetInputString();

    
    string resultIterative = FindFirstWordWithA_Iterative(input);
    PrintResult(resultIterative);

    return 0;
}
