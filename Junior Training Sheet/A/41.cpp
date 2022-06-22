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
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << a[1] - a[0] << ' ' << a[n - 1] - a[0] << '\n';
    for (int i = 1; i < n - 1; i++) {
        cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << ' ' << max(a[i] - a[0], a[n - 1] - a[i]) << '\n';
    }
    cout << a[n - 1] - a[n - 2] << ' ' << a[n - 1] - a[0] << '\n';

    return 0;
}