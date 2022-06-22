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
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int m;
    cin >> m;
    vector<int> b(m);
    for (auto &x : b) cin >> x;

    int mx = 0, ans = 0;
    // bj/bi
    for (int i : a) {
        for (int j : b) {
            if (j % i == 0) {
                if (mx < j / i)
                    mx = j / i, ans = 1;
                else if (mx == j / i)
                    ans++;
            }
        }
    }
    cout << ans;

    return 0;
}