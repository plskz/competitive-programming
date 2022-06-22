#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        int res = 1;
        int l = i - 1, r = i + 1;
        while (l >= 0 && v[l] <= v[l + 1]) l--, res++;
        while (r < n && v[r] <= v[r - 1]) r++, res++;
        cnt = max(cnt, res);
    }
    cout << cnt;

    return 0;
}