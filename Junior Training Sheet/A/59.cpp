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
    int a[n + 1], b[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) return cout << "rated", 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) return cout << "unrated", 0;
    }
    cout << "maybe";

    return 0;
}