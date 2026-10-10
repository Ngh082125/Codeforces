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

bool check(long long x, long long k) {
    long long t=0;
    while (x) {
        t+=x%10;
        x/=10;
    }
    return t%k==0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long x, k;
        cin >> x >> k;
        while (!check(x, k)) {
            x++;
        }
        cout << x << "\n";
    }
} 

int main() {
    init();
    solve();
}