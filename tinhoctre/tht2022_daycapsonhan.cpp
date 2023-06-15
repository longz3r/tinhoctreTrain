#include<bits/stdc++.h>
using namespace std;

int n, q;
long long MOD=1e9+7;
long long a[100005]={}, res[100005]={};
map<pair<long long, int>, long long> cnt;

int main(){
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cnt[{a[1],1}] = 1;
    for (int i=2; i <= n; i++) {
        cnt[{a[i],1}]++;

        if (a[i] % q != 0) continue;
        for (int j = 2; j <= n; j++) {
            long long add = cnt[{a[i] / q, j - 1}] % MOD;
            cnt[{a[i], j }] += add;
            cnt[{a[i], j}] %= MOD;
            res[j] += add;
            res[j] %= MOD;
        }
    }

    for (int i = 2; i <= n; i++) {
        cout << res[i] << " ";
    }
}
