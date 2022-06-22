#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using ll = long long;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool f = 1;
        if (max(a, b) < min(c, d) || max(c, d) < min(a, b))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}

// holeh shet