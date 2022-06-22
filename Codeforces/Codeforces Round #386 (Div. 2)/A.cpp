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

    int a, b, c;
    cin >> a >> b >> c;

    int cook = min({a, b / 2, c / 4});

    cout << cook * 7;

    return 0;
}
