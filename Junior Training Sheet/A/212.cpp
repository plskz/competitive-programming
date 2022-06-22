#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n; i++) ans += x % i == 0 && x / i <= n;
    cout << ans;

    return 0;
}