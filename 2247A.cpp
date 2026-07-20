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
        int sum=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        if (n%2!=0||sum%4!=0) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}