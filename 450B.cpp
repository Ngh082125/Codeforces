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
    long long mat[2][2];
    matrix() {
        memset(mat, 0, sizeof(mat));
    }
    matrix friend operator * (matrix &a, matrix &b) {
        matrix c;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    c.mat[i][j]=(c.mat[i][j]+a.mat[i][k]*b.mat[k][j]%mod)%mod;
                    if (c.mat[i][j]<0) c.mat[i][j]+=mod;
                }
            }
        }
        return c;
    }
};

matrix matpow(matrix base, long long n) {
    matrix re;
    re.mat[0][0]=1;
    re.mat[1][1]=1;
    while (n) {
        if (n&1) re=re*base;
        base=base*base;
        n>>=1;
    }
    return re;
}

void solve() {
    long long x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    matrix base;
    base.mat[0][0]=1;
    base.mat[0][1]=-1;
    base.mat[1][0]=1;
    base.mat[1][1]=0;
    if (x<0) x+=mod;
    else x%=mod;
    if (y<0) y+=mod;
    else y%=mod;
    if (n==1) cout << x;
    else if (n==2) cout << y;
    else {
        base=matpow(base, n-2);
        matrix base2;
        base2.mat[0][0]=y;
        base2.mat[1][0]=x;
        matrix matre=base*base2;
        cout << matre.mat[0][0];
    }
}

int main() {
    init();
    solve();
}