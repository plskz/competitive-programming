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
    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < m; i++) 
        ans += a[i] < 0 ? abs(a[i]) : 0;
    cout << ans;

    return 0;
}