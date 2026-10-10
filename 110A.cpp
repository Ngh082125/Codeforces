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
    int cnt=0;
    bool check=true;
    while (n) {
        cnt+=(n%10==4)||(n%10==7);
        n/=10;
    }
    if (cnt==0) check=false;
    while (cnt) {
        if (cnt%10!=4&&cnt%10!=7) {
            check=false;
            break;
        }
        cnt/=10;
    }
    if (check) cout << "YES";
    else cout << "NO";
}

int main() {
    init();
    solve();
}