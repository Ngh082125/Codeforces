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

void build(int id, int l, int r, bool op, vector<int>& a, vector<int>& st) {
    if (l==r) {
        st[id]=a[l];
        return;
    }
    int mid=l+(r-l)/2;
    build(id*2, l, mid, !op, a, st);
    build(id*2+1, mid+1, r, !op, a, st);
    if (op) st[id]=st[id*2]|st[id*2+1];
    else st[id]=st[id*2]^st[id*2+1];
}

void update(int id, int l, int r, int pos, int val, bool op, vector<int>& st) {
    if (l==r) {
        st[id]=val;
        return;
    }
    int mid=l+(r-l)/2;
    if (pos<=mid) update(id*2, l, mid, pos, val, !op, st);
    else update(id*2+1, mid+1, r, pos, val, !op, st);
    if (op) st[id]=st[id*2]|st[id*2+1];
    else st[id]=st[id*2]^st[id*2+1];
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a((1<<n)+1);
    for (int i = 1; i <= (1<<n); i++) {
        cin >> a[i];
    }
    vector<int> st((1<<n)*4);
    build(1, 1, (1<<n), n%2!=0, a, st);
    while (m--) {
        int p, b;
        cin >> p >> b;
        update(1, 1, (1<<n), p, b, n%2!=0, st);
        cout << st[1] << "\n";
    }
}

int main() {
    init();
    solve();
}