// https://oj.vnoi.info/problem/kmp_bnum

#include <iostream>

using namespace std;
long long MOD = 1e9+7;

int main() {
    int l, r, k;
    cin >> l >> r >> k;
    int count = 0;
//    for (int i = l; i < r; i++) {
//        if (to_string(i).find(to_string(k)) != string::npos) {
//            i += size(to_string(k)) - 1;
//            count++;
//        }
//    }

    while (l <= r) {
        if (to_string(l).find(to_string(k)) != string::npos) {
            count++;
        }
        l++;
    }
    cout << count%MOD;
}
