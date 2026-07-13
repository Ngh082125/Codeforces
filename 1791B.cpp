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
        int x=0;
        int y=0;
        bool check=false;
        for (int i = 0; i < n; i++) {
            if (s[i]=='L') x--;
            else if (s[i]=='R') x++;
            else if (s[i]=='U') y++;
            else y--;
            if (x==1&&y==1) {
                check=true;
                break;
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