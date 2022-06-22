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

    // to solve

    string s;
    int n;
    cin >> s >> n;

    string words[n];

    for (int i = 0; i < n; i++) cin >> words[i];
    string cur;
    bool nice = 0;
    for (int i = 0; i < n; i++) {
        // for(int j=0; j<n; j++) {
        //     cur += words[i]; WRONG!!
        //     cout << cur << '\n';
        // }

        for (int k = 0; k < n; k++) {
            if (s[i] == cur[i] && s[i + 1] == cur[i + 1]) {
                nice = 1;
                break;
            }
        }
        cur = "";
    }

    cout << (nice ? "YES" : "NO");

    return 0;
}