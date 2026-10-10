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
    set<char> st;
    string s;
    cin >> s;
    for (auto i: s) {
        st.insert(i);
    }
    if (st.size()&1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}

int main() {
    init();
    solve();
}