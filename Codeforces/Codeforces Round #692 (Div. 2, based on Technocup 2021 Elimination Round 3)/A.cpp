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
        int n;
        string s;
        cin >> n >> s;
        int p = 0;
        for (char c : s) {
            if (c != ')')
                p = 0;
            else
                p++;
        }
        cout << (p > s.size() - p ? "Yes" : "No") << '\n';
    }

    return 0;
}