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

void dfs(int u, int p, vector<vector<int>>& adj, vector<int>& a, int m, int cnt, int &re) {
    if (cnt>m) return;
    bool check=true;
    for (auto v: adj[u]) {
        if (v==p) continue;
        check=false;
        dfs(v, u, adj, a, m, a[v-1]==1?cnt+1:0, re);
    }
    re+=check;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int re=0;
    dfs(1, -1, adj, a, m, a[0], re);
    cout << re << "\n";
}

int main() {
    init();
    solve();
}