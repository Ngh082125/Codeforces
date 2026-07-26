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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));
        vector<vector<bool>> visited(n, vector<bool>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                visited[i][j]=false;
            }
        }
        int dx[4]={-1, 1, 0, 0};
        int dy[4]={0, 0, -1, 1};
        int re=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j]||a[i][j]==0) continue;
                visited[i][j]=true;
                int temp=a[i][j];
                queue<pair<int, int>> q;
                q.push({i, j});
                while (!q.empty()) {
                    auto x=q.front().first;
                    auto y=q.front().second;
                    q.pop();
                    for (int k = 0; k < 4; k++) {
                        int newx=x+dx[k];
                        int newy=y+dy[k];
                        if (newx>=0&&newx<n&&newy>=0&&newy<m&&!visited[newx][newy]&&a[newx][newy]) {
                            temp+=a[newx][newy];
                            visited[newx][newy]=true;
                            q.push({newx, newy});
                        }
                    }
                }
                re=max(re, temp);
            }
        }
        cout << re << "\n";
    }
}

int main() {
    init();
    solve();
}