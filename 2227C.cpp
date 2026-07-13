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
        vector<int> a(n);
        vector<int> six;
        vector<int> two;
        vector<int> three;
        vector<int> other;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]%6==0) six.push_back(a[i]);
            else if (a[i]%2==0) two.push_back(a[i]);
            else if (a[i]%3==0) three.push_back(a[i]);
            else other.push_back(a[i]);
        }
        for (auto i: six) {
            cout << i << " ";
        }
        for (auto i: two) {
            cout << i << " ";
        }
        for (auto i: other) {
            cout << i << " ";
        }
        for (auto i: three) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}