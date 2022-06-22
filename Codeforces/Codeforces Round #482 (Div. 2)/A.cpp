#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    if (n == 0) return cout << 0, 0;
    cout << (n + 1 & 1 ? n + 1 : (n + 1) / 2);

    return 0;
}