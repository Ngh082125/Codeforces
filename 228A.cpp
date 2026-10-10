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
    set<long long> s;
    long long x;
    for (int i = 0; i < 4; i++) {
        cin >> x;
        s.insert(x);
    }
    cout << 4-s.size();
}

int main() {
    init();
    solve();
}