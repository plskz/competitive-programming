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
    bool f = 0;
    while (n--) {
        string s;
        int b, a;  // before, after
        cin >> s >> b >> a;
        if (b >= 2400 && b < a) f = 1;
    }
    cout << (f ? "YES" : "NO");

    return 0;
}