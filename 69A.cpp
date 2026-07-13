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
    int sa=0;
    int sb=0;
    int sc=0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        sa+=a;
        sb+=b;
        sc+=c;
    }
    if (sa==0&&sb==0&&sc==0) cout << "YES";
    else cout << "NO";
}

int main() {
    init();
    solve();
}