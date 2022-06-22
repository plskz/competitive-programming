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
    int cnt = 0;
    int h = 0;
    while (cnt <= n) {
        h++;
        cnt += (h * (h + 1)) / 2;
        // cout << "h: " << h << '\n';
        // cout << "cnt: " << cnt << '\n';
    }
    cout << h - 1;

    return 0;
}