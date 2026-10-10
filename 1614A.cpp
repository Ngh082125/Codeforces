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
        long long n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<int> a;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x>=l&&x<=r) a.push_back(x);
        }
        sort(a.begin(), a.end());
        long long cnt=0;
        for (auto i: a) {
            if (k>=i) {
                k-=i;
                cnt++;
            }
            else break;
        }
        cout << cnt << "\n";
    }
} 

int main() {
    init();
    solve();
}