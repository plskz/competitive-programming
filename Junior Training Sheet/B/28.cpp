#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using ll = long long;

using namespace std;

char key[31][31];
bool can[26];

int n, m, x;
vector<pair<int, int>> posKey[26];
vector<pair<int, int>> shift;

int dist(int i, int j, int ii, int jj) { 
    return (i - ii) * (i - ii) + (j - jj) * (j - jj); 
}

bool check(int i, int j) {
    for (int k = 0; k < shift.size(); k++) {
        int dis = dist(i, j, shift[k].first, shift[k].second);
        if (dis <= x * x) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> x;
    for (int i = 0; i < n; i++)  // ! keyboard keys
        cin >> key[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // ! position of the key
            if (key[i][j] == 'S')
                shift.push_back({i, j});
            else
                posKey[key[i][j] - 'a'].push_back({i, j});
        }
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < posKey[i].size() && !can[i]; j++) {
            // ! check if we can press it with one hand
            can[i] = can[i] | check(posKey[i][j].first, posKey[i][j].second);
        }
    }

    int q;
    string s;
    cin >> q >> s;

    int ans = 0;
    for (int i = 0; i < q; i++) {
        if (islower(s[i])) {
            if (posKey[s[i] - 'a'].empty()) return cout << -1, 0;
        } else {
            s[i] = tolower(s[i]);
            if (shift.empty() || posKey[s[i] - 'a'].empty()) return cout << -1, 0;

            // ! check if some letter can't reach it with one hand
            if (!can[s[i] - 'a']) ans++;
        }
    }

    cout << ans;

    return 0;
}