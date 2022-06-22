#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;
    string words[n];
    for (int i = 0; i < n; i++) cin >> words[i];

    int cur = 0;

    for (int i = 0; i < n; i++) {
        if (cur + words[i].size() > k) {
            cout << '\n' << words[i];
            cur = words[i].size();
        } else {
            if (cur > 0)
                cout << ' ';
            cout << words[i];
            cur += words[i].size();
        }
    }

    return 0;
}