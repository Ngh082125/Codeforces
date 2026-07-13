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
    string a, b, c;
    cin >> a >> b >> c;
    string t=a+b;
    sort(t.begin(), t.end());
    sort(c.begin(), c.end());
    if (t == c) cout << "YES";
    else cout << "NO";
}

int main() {
    init();
    solve();
}