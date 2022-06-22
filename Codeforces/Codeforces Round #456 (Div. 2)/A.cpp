#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    ll a, b, x, y, z;
    cin >> a >> b >> x >> y >> z;

    int yellow = 2 * x + y;
    int blue = y + 3 * z;

    // cout << (yellow < a ? 0 : yellow-a) + (blue < b ? 0 : blue-b);

    cout << (2 * x + y < a ? 0 : 2 * x + y - a) + (y + 3 * z < b ? 0 : y + 3 * z - b);

    return 0;
}