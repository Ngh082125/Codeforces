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
        long long n;
        cin >> n;
        long long a=INT_MAX;
        long long b=INT_MAX;
        long long c=INT_MAX;
        while (n--) {
            long long m;
            cin >> m;
            string s;
            cin >> s;
            if (s=="01") a=min(a, m);
            if (s=="10") b=min(b, m);
            if (s=="11") c=min(c, m);
        }
        if (min(a+b, c)==INT_MAX) cout << -1;
        else cout << min(a+b, c);
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}