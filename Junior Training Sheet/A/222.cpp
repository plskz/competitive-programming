#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 1) return cout << 0, 0;

    int cnt = 0;
    while (a > 0 && b > 0) {
        cnt++;
        if (a > b) {
            a -= 2;
            b++;
        } else {
            b -= 2;
            a++;
        }
    }
    cout << cnt;

    return 0;
}