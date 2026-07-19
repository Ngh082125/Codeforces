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
        string s;
        cin >> s;
        if (s.size()<=10) cout << s;
        else {
            cout << s[0];
            cout << s.size()-2;
            cout << s.back();
        }
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}