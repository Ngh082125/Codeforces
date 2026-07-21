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
        bool check=false;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i]!=s[i+1]) {
                check=true;
                break;
            }
        }
        if (check) {
            cout << "YES\n";
            char t=s[0];
            s.erase(0, 1);
            s.push_back(t);
            cout << s << "\n";
        }
        else cout << "NO\n";
    }
}

int main() {
    init();
    solve();
}