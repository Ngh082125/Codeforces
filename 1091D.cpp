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

const long long mod=998244353;

void solve() {
    long long n;
    cin >> n;
    vector<long long> fact(n+1);
    fact[0]=fact[1]=1;
    for (int i = 2; i <= n; i++) {
        fact[i]=(fact[i-1]*i)%mod;
    }
    long long bad=0;
    if (n>=2) {
        long long temp=n;
        bad=(bad+temp)%mod;
        for (int k = n-1; k >= 2; k--) {
            temp=(temp*k)%mod;
            bad=(bad+temp)%mod;
        }
    }
    cout << ((n*fact[n])%mod-bad%mod+mod)%mod;
}

int main() {
    init();
    solve();
}