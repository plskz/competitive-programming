#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 9; i++) {
            string s;
            cin >> s;
            for (auto &c : s)
                if (c == '2') c = '1';
            cout << s << '\n';
        }
    }

    return 0;
}