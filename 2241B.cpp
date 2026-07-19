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
        int cnt=0;
        while (n) {
            cnt++;
            n/=10;
        }
        long long re=pow(10, cnt)+1;
        cout << re << "\n";
    }
}

int main() {
    init();
    solve();
}