#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int r = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        r += x;
        cout << r / m << ' ';
        r %= m;
    }

    return 0;
}