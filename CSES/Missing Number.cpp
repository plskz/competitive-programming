#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n - 1; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    ll total = 1;
    for (int i = 2; i <= n; ++i) {
        total += i;
        total -= v[i - 2];
    }
    cout << total;
    return 0;
}