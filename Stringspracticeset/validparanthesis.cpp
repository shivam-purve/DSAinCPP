#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    char simulatedStack[10000]; // simulate a stack with array
    int top = -1; // pointer to the top of the simulated stack

    for (char ch : s) {
        // If it's an opening bracket, simulate push
        if (ch == '(' || ch == '{' || ch == '[') {
            simulatedStack[++top] = ch;
        } else {
            // If no opening bracket to match, invalid
            if (top == -1) return false;

            // Check for correct matching pair
            if ((ch == ')' && simulatedStack[top] != '(') ||
                (ch == '}' && simulatedStack[top] != '{') ||
                (ch == ']' && simulatedStack[top] != '[')) {
                return false;
            }

            // Simulate pop
            top--;
        }
    }

    // If there are leftover unmatched opening brackets
    return top == -1; //returns true if again top has come to -1 i.e no brackets are remaining opening
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isValid(str)) {
        cout << "Input string is valid" << endl;
    } else {
        cout << "Input string is not valid" << endl;
    }

    return 0;
}
