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
    bool prime[1000001];
    for (int i = 0; i <= 1000000; i++) {
        prime[i]=true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i <= 1000; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= 1000000; j+=i) {
                prime[j]=false;
            }
        }
    }
    while (t--) {
        long long n;
        cin >> n;
        if (sqrt(n)==round(sqrt(n))&&prime[(int)sqrt(n)]) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}

int main() {
    init();
    solve();
}