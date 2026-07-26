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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i=0;
        int j;
        int re=0;
        while (i<n) {
            j=i;
            while (j<n&&a[j]==0) {
                j++;
            }
            re=max(re, j-i);
            i=j+1;
        }
        cout << max(re, j-i) << "\n";
    }
}

int main() {
    init();
    solve();
}