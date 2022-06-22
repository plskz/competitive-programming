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
    transform(all(s), s.begin(), ::tolower);
    string vow = "aoyeui";
    for (auto c : s) {
        bool f = 0;
        for (int i = 0; i < 6; i++) {
            if (c == vow[i]) f = 1;
        }
        if (!f)
            cout << '.' << c;
        else
            continue;
    }

    return 0;
}