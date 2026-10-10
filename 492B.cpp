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
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double re=0;
    for (int i = 1; i < a.size(); i++) {
        re=max(re, (double)(a[i]-a[i-1])/2);
    }
    cout << fixed << setprecision(10) << max({re, (double)(a[0]-0), (double)(l-a[n-1])});
}

int main() {
    init();
    solve();
}