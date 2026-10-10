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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min({a, c, d})*256+min(b, a-min({a, c, d}))*32;
}

int main() {
    init();
    solve();
}