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
        auto idx=s.find('0');
        s.erase(idx, 1);
        idx=s.find('1');
        s.erase(idx, 1);
        cout << s << "\n";
    }
}

int main() {
    init();
    solve();
}