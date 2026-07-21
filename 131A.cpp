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
    int cnt=0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]>='A'&&s[i]<='Z') cnt++;
    }
    if (cnt==s.size()) {
        for (int i = 0; i < s.size(); i++) {
            s[i]=tolower(s[i]);
        }
    }
    else if (cnt==s.size()-1&&s[0]>='a'&&s[0]<='z') {
        s[0]=toupper(s[0]);
        for (int i = 1; i < s.size(); i++) {
            s[i]=tolower(s[i]);
        }
    }
    cout << s;
}

int main() {
    init();
    solve();
}