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
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int mna=*min_element(a.begin(), a.end());
        int mnb=*min_element(b.begin(), b.end());
        long long re=0;
        for (int i = 0; i < n; i++) {
            a[i]-=mna;
            b[i]-=mnb;
            re+=max(a[i], b[i]);
        }
        cout << re << "\n";
    }
}

int main() {
    init();
    solve();
}