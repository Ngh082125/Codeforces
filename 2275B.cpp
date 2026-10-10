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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> st;
        vector<bool> cnt(n+1, false);
        for (int i = 0; i < n; i++) {
            if (s[i]=='1') st.push(i+1);
            else if (s[i]=='2') {
                if (st.empty()) cnt[i+1]=true;
                else {
                    cnt[st.top()]=true;
                    st.pop();
                }
            }
            else cnt[i+1]=true;
        }
        vector<int> re;
        for (int i = 1; i <= n; i++) {
            if (!cnt[i]) re.push_back(i);
        }
        cout << re.size() << "\n";
        for (auto i: re) {
            cout << i << " ";
        }
        cout << "\n";
    }
} 

int main() {
    init();
    solve();
}