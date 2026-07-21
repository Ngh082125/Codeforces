#include <bits/stdc++.h>
using namespace std;

void init() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

const long long mod=1e9+7;

long long power(long long base, long long n) {
    long long re=1;
    while (n) {
        if (n&1) re=(re*base)%mod;
        base=(base*base)%mod;
        n>>=1;
    }
    return re;
}

void solve() {
    int n;
    cin >> n;
    long long a=power(3, n);
    long long b=(n&1)?-3:3;
    long long c=(a+b+mod)%mod;
    long long d=power(4, mod-2);
    cout << (c*d)%mod;
}

int main() {
    init();
    solve();
}