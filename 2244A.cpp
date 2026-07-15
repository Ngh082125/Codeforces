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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int re=0;
        int cur=0;
        for (int i = 0; i < n; i++) {
            if (s[i]=='#') {
                cur++;
                re=max(re, (cur+1)/2);
            }
            else cur=0;
        }
        cout << re << "\n";
    }
}

int main() {
    init();
    solve();
}