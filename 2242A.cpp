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
        vector<int> a(n);
        bool check=false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]>=3) check=true;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i==j) continue;
                if (a[i]==a[j]&&a[i]>=2) {
                    check=true;
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