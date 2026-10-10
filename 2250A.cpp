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
        int minodd=INT_MAX;
        int maxeven=INT_MIN;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if ((i+1)&1) minodd=min(minodd, a[i]);
            else maxeven=max(maxeven, a[i]);
        }
        if ((n&1)||minodd-maxeven<=1) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}