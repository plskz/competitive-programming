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
    string s[51];

    int i0 = 51, i1 = -1;
    int j0 = 51, j1 = -1;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < m; j++) {
            if (s[i][j] == '*') {
                i0 = min(i0, i);
                i1 = max(i1, i);

                j0 = min(j0, j);
                j1 = max(j1, j);
            }
        }
    }

    for (int i = i0; i <= i1; i++) 
        cout << s[i].substr(j0, j1 - j0 + 1) << '\n';

    return 0;
}