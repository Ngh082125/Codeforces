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
        long long a, b, c;
        cin >> a >> b >> c;
        if (a>=b) cout << a+c-b;
        else cout << max(abs(a-b), a+c-b);
        cout << "\n";
    }
} 

int main() {
    init();
    solve();
}