//https://tinhoctre.vn/problem/tht2022_catghepxau

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<string> pieces;
    vector<int> cuts;
    int last;
// loop qua tung ki tu mot r xem no co substring k
    for (int i = 0; i < size(s1); i++) {
        for (int j = 1; j < size(s1) - 1; j++) {
            int location = s2.find(s1.substr(i, j));
            if (location == -1) {
                break;
            }
            if (size(cuts) == 0 ) {
                last = 0;
            } else {
                last = cuts[size(cuts) - 1];
            }
            cout << location << endl;
            if (location != -1 && location > last){
                cuts.push_back(location);
//                cout << location;
            }
        }

    }
//    abcabc
//    aabbcc
    for (int i = 0; i < size(cuts); i++) {
        cout << cuts[i];
    }
}
