#include<iostream>
#include <string>
#include<vector>
#include<limits.h>

using namespace std;

int main() {
    int x = 1534236469;
    string s = to_string(x);
    string rs = "";
        if (s[0] == '-') {
            rs += "-";
        }
        for (int i = 1; i <= size(s); i++) {
            rs += s[size(s) - i];
        }

        cout << rs;

        const char* cs = rs.c_str();


        if (atoi(cs) > 2147483647 || atoi(cs) < -2147483647 - 1) {
            return 0;
        }
        return atoi(cs);
}
