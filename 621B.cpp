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
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        mp1[x+y]++;
        mp2[x-y]++;
    }
    int re=0;
    for (auto i: mp1) {
        re+=(i.second*(i.second-1))/2;
    }
    for (auto i: mp2) {
        re+=(i.second*(i.second-1))/2;
    }
    cout << re;
}

int main() {
    init();
    solve();
}