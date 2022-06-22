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
    string cur;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        cur = s[i];
        if (i != 0 && s[i - 1][0] == cur[i]) return cout << "NO", 0;
        for (int j = 0; j < m; j++) {
            if (s[i][0] != s[i][j]) return cout << "NO", 0;
        }
    }
    cout << "YES";

    return 0;
}