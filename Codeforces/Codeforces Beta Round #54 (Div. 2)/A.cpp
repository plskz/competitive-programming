#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    string s;
    cin >> s;

    char w[] = "hello";
    int x = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == w[x]) x++;
    }
    cout << (x == 5 ? "YES" : "NO");

    return 0;
}
