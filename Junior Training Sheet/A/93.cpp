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
    int f = 1;
    while (n--) {
        int x;
        cin >> x;
        if (x & 1)
            cout << (x + f) / 2 << '\n', f *= -1;
        else
            cout << x / 2 << '\n';
    }

    return 0;
}