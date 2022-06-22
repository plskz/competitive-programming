#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, r, a;
    cin >> l >> r >> a;
    while (a > 0) {
        if (l < r)
            l++;
        else
            r++;
        a--;
    }
    cout << min(l, r) * 2;

    return 0;
}