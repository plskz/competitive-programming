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
    int a[3] = {0};
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        a[0] += x;
        a[1] += y;
        a[2] += z;
    }
    cout << (a[0] == 0 && a[1] == 0 && a[2] == 0 ? "YES" : "NO");

    return 0;
}