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
    int re=0;
    re+=n/100;
    n-=100*(n/100);
    re+=n/20;
    n-=20*(n/20);
    re+=n/10;
    n-=10*(n/10);
    re+=n/5;
    n-=5*(n/5);
    re+=n;
    cout << re;
}

int main() {
    init();
    solve();
}