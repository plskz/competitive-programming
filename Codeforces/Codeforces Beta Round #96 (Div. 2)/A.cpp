#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    bool f = 0;
    for (auto c : s)
        if (c == 'H' || c == 'Q' || c == '9') f = 1;

    cout << (f ? "YES" : "NO");

    return 0;
}