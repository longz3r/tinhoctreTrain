#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    int m;
    getline(cin, s);
    cin >> m;
    cin.ignore();
    string instructInput;
    for (int i = 1; i <= m; i++) {
        getline(cin, instructInput);

        istringstream iss(instructInput);

        int start, end;
        char oldChar, newChar;
        iss >> start >> end >> oldChar >> newChar;

        string replacePart = s.substr(start, end - start + 1);

        for (size_t j = 0; j < replacePart.size(); j++) {
            if (replacePart[j] == oldChar) {
                replacePart[j] = newChar;
            }
        }

        s.replace(start, end - start + 1, replacePart);
    };

    cout << s;
    return 0;
}
