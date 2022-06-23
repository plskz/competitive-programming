#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;
    cout << (min(x, y) + 3 > max(x, y) ? "Yes" : "No");

    return 0;
}