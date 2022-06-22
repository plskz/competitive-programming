#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[] = {100, 20, 10, 5, 1};

    ll n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        ans += n / a[i];
        n %= a[i];
    }
    cout << ans;

    return 0;
}