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
    sort(all(v));
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (sum <= v[i]) {
            sum += v[i];
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}