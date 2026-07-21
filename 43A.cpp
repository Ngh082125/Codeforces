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
    map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;
        mp[s]++;
    }
    int mx=0;
    string re;
    for (auto i: mp) {
        if (i.second>mx) {
            mx=i.second;
            re=i.first;
        }
    }
    cout << re;
}

int main() {
    init();
    solve();
}