#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            bool f = 0;
            if (i & 1)
                f = 1;
            else {
                if (i % 4 == 2) f = (j == m);
                if (i % 4 == 0) f = (j == 1);
            }
            cout << (f ? "#" : ".");
        }
        cout << '\n';
    }

    return 0;
}