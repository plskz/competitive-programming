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

    ll n, x;
    string s;
    cin >> n >> x >> s;

    for (int i = 0; i < n; i++) {
        if (x == 0)
            continue;
        else if (s[i] == 'o')
            x++;
        else
            x--;
    }
    cout << x;

    return 0;
}
