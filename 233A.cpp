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
    int n;
    cin >> n;
    if (n&1) cout << -1;
    else {
        for (int i = 1; i <= n; i+=2) {
            cout << i+1 << " " << i << " ";
        }
    }
}

int main() {
    init();
    solve();
}