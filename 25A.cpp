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
    int even=0;
    int odd=0;
    int leven=0;
    int lodd=0;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x&1) {
            odd++;
            lodd=i;
        }
        else {
            even++;
            leven=i;
        }
    }
    if (odd==1) cout << lodd;
    else cout << leven;
}

int main() {
    init();
    solve();
}