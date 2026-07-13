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
        int cnt2=0;
        int cnt3=0;
        while (n%2==0) {
            cnt2++;
            n/=2;
        }
        while (n%3==0) {
            cnt3++;
            n/=3;
        }
        if (n==1&&cnt2<=cnt3) cout << cnt3*2-cnt2;
        else cout << -1;
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}