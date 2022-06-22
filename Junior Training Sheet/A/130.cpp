#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

string s[200];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int r = 0, c = 0;
        for (int j = 0; j < n; j++) {
            r += s[i][j] == 'C';
            c += s[j][i] == 'C';
        }
        ans += (r * (r - 1)) / 2 + (c * (c - 1)) / 2;
    }
    cout << ans;

    return 0;
}