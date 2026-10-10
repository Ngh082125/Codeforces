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

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        cout << min(m, a)+min(m, b)+min(m*2-min(m, a)-min(m, b), c) << "\n";
    }
} 

int main() {
    init();
    solve();
}