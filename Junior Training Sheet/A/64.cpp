#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    set<char> diag, others;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char x;
            cin >> x;
            if (i == j || i + j == n - 1)
                diag.insert(x);
            else
                others.insert(x);
        }
    }
    cout << (diag.size() == 1 && others.size() == 1 && *diag.begin() != *others.begin() ? "YES" : "NO");

    return 0;
}