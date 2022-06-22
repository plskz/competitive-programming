#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    ll x = (n + 1) / 2;
    cout << (k <= x ? 2 * k - 1 : 2 * (k - x));

    return 0;
}