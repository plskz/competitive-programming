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

    int a, b;
    cin >> a >> b;

    int year = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        year++;
    }
    cout << year;

    return 0;
}