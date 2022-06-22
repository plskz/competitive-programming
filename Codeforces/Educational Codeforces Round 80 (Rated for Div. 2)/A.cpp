#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, d;
        cin >> n >> d;
        ll x = (n + 1) / 2;
        cout << ((n + 1 - x) * x >= d ? "YES" : "NO") << '\n';
    }

    return 0;
}