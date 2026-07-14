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
    int i=1;
    while (i<s.size()) {
        if (s[i]=='/'&&s[i-1]=='/') s.erase(i, 1);
        else i++;
    }
    while (s.size()>1&&s.back()=='/') s.pop_back();
    cout << s;
}

int main() {
    init();
    solve();
}