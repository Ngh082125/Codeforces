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
    int cnt=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]&1) cnt++;
    }
    if (cnt&1) cnt--;
    sort(a.rbegin(), a.rend());
    long long re=0;
    for (int i = 0; i < n; i++) {
        if (!(a[i]&1)) re+=a[i];
        else if ((a[i]&1)&&(cnt>0)) {
            re+=a[i];
            cnt--;
        }
    }
    cout << re;
}

int main() {
    init();
    solve();
}