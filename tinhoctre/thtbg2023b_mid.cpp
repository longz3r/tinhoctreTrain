// https://tinhoctre.vn/problem/thtbg2023b_mid
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long int min1 = INT_MAX;
    long long int min2 = INT_MAX;
    for (long long int i = a + 1; i < b; i++) {
        if (abs(a * i - b * i) < min1) {
            min1 = abs(a * i - b * i);
            min2 = i;
        }
    }
    cout << min2;
}