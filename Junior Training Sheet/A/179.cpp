#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = max(3 * a / 10, a - (a / 250) * c);
    int y = max(3 * b / 10, b - (b / 250) * d);

    cout << (x == y ? "Tie" : x > y ? "Misha" : "Vasya");

    return 0;
}