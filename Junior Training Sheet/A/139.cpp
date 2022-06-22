#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        // int x = abs(a[i]-b[i]);
        // cout << x << ' ' << 10 - x << '\n';
        cnt += min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << cnt;

    return 0;
}