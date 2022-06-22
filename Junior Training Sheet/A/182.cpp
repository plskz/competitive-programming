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
    int a[n] = {0};
    int mn = INT_MAX;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = i > 0 ? max(mn, a[i] - a[i - 1]) : 0;
        mx = i > 1 ? min(mx, a[i] - a[i - 2]) : INT_MAX;
    }
    cout << max(mn, mx);

    return 0;
}