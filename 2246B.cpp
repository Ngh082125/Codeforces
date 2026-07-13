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
        if (n==1) {
            cout << 1 << "\n";
            continue;
        }
        if (n==2) {
            cout << -1 << "\n";
            continue;
        }
        vector<long long> re;
        re.push_back(1);
        re.push_back(2);
        long long sum=3;
        for (int i = 3; i <= n; i++) {
            re.push_back(sum);
            sum+=re.back();
        }
        for (auto i: re) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}