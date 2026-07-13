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
    int temp=0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        temp+=(x!=0);
    }
    if (temp>0) cout << "HARD";
    else cout << "EASY";
}

int main() {
    init();
    solve();
}