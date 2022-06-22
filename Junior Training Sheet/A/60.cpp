#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10) return cout << -1, 0;
    cout << (t == 10 ? 1 : t);
    for (int i = 0; i < n - 1; i++) cout << 0;

    return 0;
}