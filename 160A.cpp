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
    vector<int> a(n);
    int sum=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.rbegin(), a.rend());
    int temp=sum;
    for (int i = 0; i < n; i++) {
        temp-=a[i];
        if ((temp<<1)<sum) {
            cout << i+1;
            break;
        }
    }
}

int main() {
    init();
    solve();
}