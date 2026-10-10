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
    string s;
    cin >> s;
    char mx='a';
    for (auto i: s) {
        mx=max(mx, i);
    }
    string re="";
    for (auto i: s) {
        if (i==mx) re+=i;
    }
    cout << re;
}

int main() {
    init();
    solve();
}