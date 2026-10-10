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
    int up=0;
    int low=0;
    for (auto i: s) {
        if (i>='A'&&i<='Z') up++;
        else low++;
    }
    if (up>low) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i]>='a'&&s[i]<='z') s[i]-=32;
        }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
    }
    cout << s;
}

int main() {
    init();
    solve();
}