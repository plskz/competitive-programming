#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int res = 0;
    string v = "aeiou";

    for (auto c : s) {
        if (find(all(v), c) != v.end() || (isdigit(c) && (c - '0') % 2)) ++res;
    }

    cout << res << '\n';

    return 0;
}
