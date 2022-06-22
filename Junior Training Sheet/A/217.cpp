#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

bool a[105][105];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        for (int j = 1; j <= n; j++) {
            a[i][j] += (s[j - 1] == 'o');
        }
    }

    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            cnt = a[i][j - 1] + a[i][j + 1] + a[i - 1][j] + a[i + 1][j];
            if (cnt & 1) return cout << "NO", 0;
        }
    }
    cout << "YES";

    return 0;
}