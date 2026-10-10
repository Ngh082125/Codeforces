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
    long long mat[53][53];
    matrix() {
        memset(mat, 0, sizeof(mat));
    }
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i < 53; i++) {
            for (int j = 0; j < 53; j++) {
                c.mat[i][j]=0;
                for (int k = 0; k < 53; k++) {
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

int get(char x) {
    if (x>='a'&&x<='z') return x-'a';
    return x-'A'+26;
}

void solve() {
    long long n, m, k;
    cin >> n >> m >> k;
    matrix matre;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            matre.mat[i][j]=1;
        }
    }
    for (int i = 0; i < k; i++) {
        char x, y;
        cin >> x >> y;
        matre.mat[get(x)][get(y)]=0;
    }
    matre=matpow(matre, n-1, m);
    long long re=0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            re=(re+matre.mat[i][j])%mod;
        }
    }
    cout << re;
}

int main() {
    init();
    solve();
}