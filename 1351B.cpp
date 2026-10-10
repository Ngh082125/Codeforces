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
        long long a1, b1;
        cin >> a1 >> b1;
        long long a2, b2;
        cin >> a2 >> b2;
        if (a1>b1) swap(a1, b1);
        if (a2>b2) swap(a2, b2);
        if (b1==b2&&a1+a2==b1) cout << "Yes";
        else cout << "No";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}