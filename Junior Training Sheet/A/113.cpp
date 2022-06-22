#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    // int x = 0, y = 0;

    // while(1) {
    //     if(a == 0 || b == 0) break;
    //     x++;
    //     a--, b--;
    // }
    // y = max(a, b) / 2;
    // cout << x << ' ' << y;

    cout << min(a, b) << ' ' << abs(a - b) / 2;

    return 0;
}