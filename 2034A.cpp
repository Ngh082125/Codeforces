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
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }
}

int main() {
    init();
    solve();
}