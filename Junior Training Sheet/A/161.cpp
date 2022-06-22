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
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int mn = min_element(allr(v)) - v.rbegin();
    int mx = max_element(all(v)) - v.begin();

    cout << mn + mx - (mx >= n - mn);

    return 0;
}