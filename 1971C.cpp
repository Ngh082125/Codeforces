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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s="";
        for (int i = 1; i <= 12; i++) {
            if (i==a||i==b) s+='a';
            if (i==c||i==d) s+='b';
        }
        if (s=="abab"||s=="baba") cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}