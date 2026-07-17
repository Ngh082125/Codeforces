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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n<k*2) cout << -1;
        else {
            int re=0;
            for (int i = 0; i < k; i++) {
                if (s[i]=='L') re++;
            }
            for (int i = n-1; i >= n-k; i--) {
                if (s[i]=='R') re++;
            }
            cout << re;
        }
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}