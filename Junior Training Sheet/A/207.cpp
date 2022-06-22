#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int a[101][101];
int mx[101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            a[i][j] = s[j] - '0';
            mx[j] = max(mx[j], a[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 0; j < m; j++) ok += a[i][j] == mx[j];
        cnt += ok;
    }
    cout << cnt;

    return 0;
}