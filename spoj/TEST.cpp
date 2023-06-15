#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    while (true) {
        getline(cin, input);
        if (input == "42") {
            break;
        } else {
            cout << input << endl;
        }
    }
}