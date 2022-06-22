#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    ll cur;
    cur = x;
    int sadboi = 0;
    while (n--) {
        char c;
        int d;
        cin >> c >> d;
        if (c == '+')
            cur += d;
        else if (cur - d >= 0)
            cur -= d;
        else
            sadboi++;
        // cout << "cur: " << cur << '\n';
    }
    cout << cur << ' ' << sadboi;

    return 0;
}