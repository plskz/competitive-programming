#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t, k, d;
    cin >> n >> t >> k >> d;
    // cout << (((d+t)/t) * k < n ? "YES" : "NO");  // AC
    cout << ((n - 1) / k * t > d ? "YES" : "NO");

    return 0;
}