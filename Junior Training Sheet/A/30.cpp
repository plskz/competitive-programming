#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[4][5001], cnt[4];
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x][cnt[x]] = i;
        cnt[x]++;
    }

    int m = min({cnt[1], cnt[2], cnt[3]});
    cout << m << '\n';
    for (int i = 0; i < m; i++) {
        cout << a[1][i] << ' ' << a[2][i] << ' ' << a[3][i] << '\n';
    }

    return 0;
}