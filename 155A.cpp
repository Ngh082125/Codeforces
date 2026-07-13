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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mn=a[0];
    int mx=a[0];
    int re=0;
    for (int i = 1; i < n; i++) {
        if (a[i]<mn) {
            mn=a[i];
            re++;
        }
        if (a[i]>mx) {
            mx=a[i];
            re++;
        }
    }
    cout << re;
}

int main() {
    init();
    solve();
}