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
    vector<char> v;
    for (auto c: s) {
        if (c!='+') v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size()-1; i++) {
        cout << v[i] << '+';
    }
    cout << v.back();
}

int main() {
    init();
    solve();
}