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
    int bus = 1;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (cur + x <= m)
            cur += x;
        else
            bus++, cur = x;
    }
    cout << bus;

    return 0;
}