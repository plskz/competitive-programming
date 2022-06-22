#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    int i;
    for (i = 0; i < n; i++) {
        k -= a[i].first;
        if (k < 0) break;
    }
    cout << i << '\n';
    // You may output indices in any order.
    while (i--) cout << a[i].second << ' ';

    return 0;
}