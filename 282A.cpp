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
    int re=0;
    while (t--) {
        string s;
        cin >> s;
        if (s[1]=='+') re++;
        else re--;
    }
    cout << re;
}

int main() {
    init();
    solve();
}