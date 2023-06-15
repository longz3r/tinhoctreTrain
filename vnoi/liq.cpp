//https://oj.vnoi.info/problem/liq

#include <iostream>
using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    int a[n], f[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[i] = 1;


    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[j] > a[i] && f[j] <= f[i] ) {
                f[j] = f[i] + 1;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        if (f[i] > max) {
            max = f[i];
        }
    }
    cout << max;
}
