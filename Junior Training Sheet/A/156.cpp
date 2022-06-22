#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int a[5][5];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++) cin >> a[i][j];

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int x = a[i - 1][j] + a[i + 1][j] + a[i][j] + a[i][j + 1] + a[i][j - 1];
            // cout << x << ' ';
            cout << (x & 1 ? 0 : 1);
        }
        cout << '\n';
    }

    return 0;
}