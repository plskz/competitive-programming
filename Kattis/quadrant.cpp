#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;
    int ans = 0;

    if (x > 0 && y > 0)
        ans = 1;
    else if (x < 0 && y > 0)
        ans = 2;
    else if (x < 0 && y < 0)
        ans = 3;
    else
        ans = 4;

    cout << ans;

    return 0;
}
