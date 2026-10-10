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
        vector<long long> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<long long> v(n+3);
        unordered_map<long long, long long> mp;
        long long re=0;
        for (int i = 1; i <= n-4; i++) {
            v[i]=a[i]+a[i+2]-a[i+4];
            if (mp.count(v[i])) re+=mp[v[i]];
            mp[v[i]]++;
            if (i>=3&&v[i]==v[i-2]) re--;
            if (i>=5&&v[i]==v[i-4]) re--;
        }
        cout << re << "\n";
    }
} 

int main() {
    init();
    solve();
}