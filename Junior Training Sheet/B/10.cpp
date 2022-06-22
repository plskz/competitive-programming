#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "ROYGBIV";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << (i < 7 ? s[i] : s[3 + (i - 7) % 4]);
    }

    return 0;
}