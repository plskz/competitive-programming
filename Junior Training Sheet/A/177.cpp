#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int a = 0; a < 1001; a++) {
        for (int b = 0; b < 1001; b++) {
            cnt += (a * a + b == n && a + b * b == m);
        }
    }
    cout << cnt;

    return 0;
}