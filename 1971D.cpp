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
        int re=1;
        bool check=false;
        for (int i = 0; i < s.size()-1; i++) {
            re+=(s[i]!=s[i+1]);
            if (s[i]=='0'&&s[i+1]=='1') check=true;
        }
        cout << re-check << "\n";
    }
}

int main() {
    init();
    solve();
}