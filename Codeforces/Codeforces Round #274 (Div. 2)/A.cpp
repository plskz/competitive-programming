#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int q = a + b + c;
    int w = a + b * c;
    int e = a * (b + c);
    int r = a * b * c;
    int t = (a + b) * c;

    cout << max({q, w, e, r, t});

    return 0;
}