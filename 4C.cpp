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
    unordered_map<string, int> mp;
    while (t--) {
        string s;
        cin >> s;
        if (!mp.count(s)) cout << "OK";
        else cout << s << mp[s];
        cout << "\n";
        mp[s]++;
    }
}

int main() {
    init();
    solve();
}