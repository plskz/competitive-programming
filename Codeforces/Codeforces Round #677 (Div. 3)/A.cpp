#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend();

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int dig = x[0] - '0' - 1;
        int len = x.size();
        cout << dig * 10 + len * (len + 1) / 2 << '\n';
    }

    return 0;
}