#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            if (r == i - 1)
                r = i;
            else
                l = i - 1, r = i;
        }
    }

    reverse(v.begin() + l, v.begin() + r + 1);
    if (is_sorted(all(v)))
        cout << "yes\n" << l + 1 << ' ' << r + 1;
    else
        cout << "no";

    return 0;
}