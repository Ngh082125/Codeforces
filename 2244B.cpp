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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long sum=0;
        bool check=true;
        for (int i = 0; i < n; i++) {
            sum+=a[i];
            if (sum<(long long)(i+1)*(i+2)/2) {
                check=false;
                break;
            }
        }
        if (check) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}