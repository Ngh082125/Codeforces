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
    double a, b, c;
    cin >> a >> b >> c;
    if (a==0) {
        if (b==0) {
            if (c==0) cout << -1;
            else cout << 0;
        }
        else {
            cout << 1 << "\n";
            double x=(double)(-c)/b;
            cout << fixed << setprecision(10) << x;
        }
    }
    else {
        double delta=(double)b*b-4*a*c;
        if (delta<0) cout << 0;
        else if (delta==0) {
            cout << 1 << "\n";
            double x=(double)(-b)/(2*a);
            cout << fixed << setprecision(10) << x;
        }
        else {
            cout << 2 << "\n";
            double x1=(double)(-b-sqrt(delta))/(2*a);
            double x2=(double)(-b+sqrt(delta))/(2*a);
            if (x1>x2) swap(x1, x2);
            cout << fixed << setprecision(10) << x1 << "\n";
            cout << fixed << setprecision(10) << x2;
        }
    }
}

int main() {
    init();
    solve();
}