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
    string s;
    cin >> s;
    string t="hello";
    int pos=0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]==t[pos]) pos++;
    }
    if (pos==t.size()) cout << "YES";
    else cout << "NO";
}

int main() {
    init();
    solve();
}