#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int pos = 0, neg = 0;
    pair<int, int> a[n + 1];
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = make_pair(x, y);
        (x < 0 ? neg++ : pos++);
    }
    sort(a, a + n);
    int ans = 0;
    cout << neg - pos - 1 << ' ' << neg * 2 << '\n';
    for (int i = max(0, neg - pos - 1); i <= min(n, neg * 2); i++) 
        ans += a[i].second;
    cout << ans;

    return 0;
}