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
        int n, m;
        cin >> n >> m;
        vector<bool> mark(26, false);
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            mark[s[0]-'a']=true;
        }
        bool check=true;
        for (int i = 0; i < m; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < s.size(); j++) {
                if (!mark[s[j]-'A']) {
                    check=false;
                    break;
                }
            }
        }
        if (check) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}