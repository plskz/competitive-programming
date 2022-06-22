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
            char c;
            cin >> c;
            if (i & 1) {
                if (j & 1) {
                    cout << (c == '.' ? 'B' : '-');
                } else {
                    cout << (c == '.' ? 'W' : '-');
                }
            } else {
                if (j & 1) {
                    cout << (c == '.' ? 'W' : '-');
                } else {
                    cout << (c == '.' ? 'B' : '-');
                }
            }
        }
        cout << '\n';
    }

    return 0;
}