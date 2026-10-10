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

const long long mod=1e9+7;

struct matrix {
    long long mat[101][101];
    matrix() {
        memset(mat, 0, sizeof(mat));
    }
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i < 101; i++) {
            for (int j = 0; j < 101; j++) {
                c.mat[i][j]=0;
                for (int k = 0; k < 101; k++) {
                    c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j]%mod)%mod;
                }
            }
        }
        return c;
    }
};

matrix matpow(matrix base, long long n, long long m) {
    matrix re;
    for (int i = 0; i < m; i++) {
        re.mat[i][i]=1;
    }
    while (n) {
        if (n&1) re=re*base;
        base=base*base;
        n>>=1;
    }
    return re;
}

void solve() {
    long long n, m;
    cin >> n >> m;
    if (n<m) cout << 1;
    else {
        matrix base;
        base.mat[0][0]=1;
        base.mat[0][m-1]=1;
        for (int i = 1; i < m; i++) {
            base.mat[i][i-1]=1;
        }
        base=matpow(base, n-m+1, m);
        long long re=0;
        for (int i = 0; i < m; i++) {
            re=(re+base.mat[i][0])%mod;
        }
        cout << re;
    }
}

int main() {
    init();
    solve();
}