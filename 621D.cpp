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
    double x, y, z;
    cin >> x >> y >> z;
    vector<string> re={"x^y^z", "x^z^y", "(x^y)^z", "(x^z)^y", "y^x^z", "y^z^x", "(y^x)^z", "(y^z)^x", "z^x^y", "z^y^x", "(z^x)^y", "(z^y)^x"};
    vector<pair<double, double>> temp={{z*log(y), x}, {y*log(z), x}, {log(y)+log(z), x}, {log(z)+log(y), x}, {z*log(x), y}, {x*log(z), y}, {log(x)+log(z), y}, {log(z)+log(x), y}, {y*log(x), z}, {x*log(y), z}, {log(x)+log(y), z}, {log(y)+log(x), z}};
    vector<bool> g_one(12, false);
    vector<double> val(12);
    for (int i = 0; i < 12; i++) {
        double b=temp[i].second;
        double dlog=temp[i].first;
        if (b>1.0) {
            g_one[i]=true;
            val[i]=dlog+log(log(b));
        }
        else val[i]=-(dlog+log(-log(b)));
    }
    int idx=0;
    for (int i = 1; i < 12; i++) {
        if (g_one[i]!=g_one[idx]) {
            if (g_one[i]) idx=i;
        }
        else if (val[i]>val[idx]) idx=i;
    }
    cout << re[idx];
}

int main() {
    init();
    solve();
}