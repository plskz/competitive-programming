#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, s = 0;
    cin >> n >> k;
    while (n--) {
        int l, r;
        cin >> l >> r;
        s += r - l + 1;
        s %= k;
    }
    cout << (k - s) % k;

    return 0;
}