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

    int ans = 0;
    int price = INT_MAX;

    while (n--) {
        int a, p;
        cin >> a >> p;
        price = min(price, p);
        ans += a * price;
    }
    cout << ans;

    return 0;
}