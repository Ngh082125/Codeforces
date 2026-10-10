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
    long long t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        long long l=INT_MAX;
        long long r=INT_MIN;
        int m;
        for (long long i = 0; i < n; i++) {
            cin >> m;
            if (m==1) {
                l=min(l, i);
                r=max(r, i);
            }
        }
        if (x<r-l+1) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
} 

int main() {
    init();
    solve();
}