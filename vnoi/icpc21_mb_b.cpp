// https://oj.vnoi.info/problem/icpc21_mb_b

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n, tempInput;
    string input;
    vector<int> data;
    data.reserve(n);

    cin >> n; 
    cin.ignore();
    getline(cin, input);
    istringstream iss(input);
    while (iss >> tempInput) {
        data.push_back(tempInput);
    }

    for (int x : data) {
        bool found = false;
        for (int y : data) {
            if (x * -1 == y) {
                found = true;
                break;
            }
    }
    if (!found) {
        cout << x * -1;
    }
}
}