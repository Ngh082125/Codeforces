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
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n+1);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    vector<long long> d(n+1, 1e18);
    vector<int> pre(n+1, -1);
    d[1]=0;
    pre[1]=0;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    q.push({0, 1});
    while (!q.empty()) {
        int u=q.top().second;
        long long du=q.top().first;
        q.pop();
        if (du>d[u]) continue;
        for (auto i: adj[u]) {
            int v=i.first;
            long long uv=i.second;
            if (d[v]>d[u]+uv) {
                d[v]=d[u]+uv;
                q.push({d[v], v});
                pre[v]=u;
            }
        }
    }
    if (d[n]==1e18) cout << -1;
    else {
        vector<int> re;
        while (n!=0) {
            re.push_back(n);
            n=pre[n];
        }
        reverse(re.begin(), re.end());
        for (auto i: re) {
            cout << i << " ";
        }
    }
}

int main() {
    init();
    solve();
}