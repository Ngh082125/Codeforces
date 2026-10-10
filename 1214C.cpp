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
    long long n;
    cin >> n;
    string s;
    cin >> s;
    if (n&1) cout << "No";
    else {
        int cur=0;
        bool check=true;
        for (auto i: s) {
            if (i=='(') cur++;
            else cur--;
            if (cur<-1) {
                check=false;
                break;
            }
        }
        if (check&&cur<=1&cur>=-1) cout << "Yes";
        else cout << "No";
    }
}

int main() {
    init();
    solve();
}