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

    int t;
    cin >> t;
    ll sum = 0;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        sum += ((b - a + 1) * (a + b)) / 2;
    }
    cout << sum;

    return 0;
}