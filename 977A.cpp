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
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        if (n%10==0) n/=10;
        else n--;
    }
    cout << n;
}

int main() {
    init();
    solve();
}