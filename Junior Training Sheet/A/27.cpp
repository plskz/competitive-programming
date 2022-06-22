#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() > 10) {
            int sl = s.length() - 2;
            cout << s.front() << sl << s.back() << "\n";
        } else {
            cout << s << "\n";
        }
    }

    return 0;
}