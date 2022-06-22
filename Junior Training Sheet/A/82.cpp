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
    vector<int> v(2 * n + 1);
    for (auto &x : v) cin >> x;

    for (int i = 1; i < 2 * n + 1; i += 2) {
        if (k && v[i] > v[i - 1] + 1 && v[i] > v[i + 1] + 1) {
            k--;
            v[i]--;
        }
    }

    for (auto x : v) cout << x << ' ';

    return 0;
}