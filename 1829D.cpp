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

bool check(int n, int m) {
    if (n==m) return true;
    if (n%3!=0) return false;
    return check(n/3, m)||check(2*n/3, m);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (check(n, m)) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}