#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

string s[150];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    char c;
    cin >> n >> m >> c;
    for (int i = 0; i < n; i++) cin >> s[i];
    set<char> st;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == c) {
                if (i != 0 && s[i - 1][j] != c)     st.insert(s[i - 1][j]);
                if (i != n - 1 && s[i + 1][j] != c) st.insert(s[i + 1][j]);
                if (j != 0 && s[i][j - 1] != c)     st.insert(s[i][j - 1]);
                if (j != m - 1 && s[i][j + 1] != c) st.insert(s[i][j + 1]);
            }
        }
    }
    cout << (st.count('.') ? st.size() - 1 : st.size());

    return 0;
}