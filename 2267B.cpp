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
        int cnt[101]={0};
        int x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            cnt[x]++;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 100; j >= 1; j--) {
                if (cnt[j]>=i) cout << j << " ";
            }
        }
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}