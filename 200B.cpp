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
    int n;
    cin >> n;
    vector<int> a(n);
    int s=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s+=a[i];
    }
    cout << fixed << setprecision(10) << (double)s/n;
}

int main() {
    init();
    solve();
}