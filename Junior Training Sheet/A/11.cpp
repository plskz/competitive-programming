#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string s;
    cin >> s;

    int low = 0, high = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i]))
            low++;
        else
            high++;
    }

    if (low == high)
        transform(all(s), s.begin(), ::tolower);
    else if (low > high)
        transform(all(s), s.begin(), ::tolower);
    else
        transform(all(s), s.begin(), ::toupper);

    cout << s;

    return 0;
}