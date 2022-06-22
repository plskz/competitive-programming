#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using ll = long long;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (k * k > n || n % 2 != k % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
