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
    long long sum=n*(n+1)/2;
    cout << (sum&1) << "\n";
    sum>>=1;
    vector<long long> re;
    while (n<=sum) {
        re.push_back(n);
        sum-=n;
        n--;
    }
    if (sum>0) re.push_back(sum);
    cout << re.size() << " ";
    for (auto i: re) {
        cout << i << " ";
    }
}

int main() {
    init();
    solve();
}