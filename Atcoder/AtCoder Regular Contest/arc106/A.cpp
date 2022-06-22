#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

ll power(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans *= a;
        a *= a;
        b /= 2;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    ll n;
    cin >> n;
    ll ans = 0;
    bool noice = false;
    ll a, b;
    for (ll i = 1; i <= 38; i++) {
        for (ll j = 1; j <= 26; j++) {
            ans = power(3, i) + power(5, j);
            if (ans == n) {
                noice = true;
                a = i;
                b = j;
                break;
            }
        }
    }

    if (noice)
        cout << a << ' ' << b;
    else
        cout << -1;

    return 0;
}