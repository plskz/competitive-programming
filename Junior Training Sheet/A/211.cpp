#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, s;
    cin >> a >> b >> s;
    int sum = abs(a) + abs(b);
    if (s < sum)
        cout << "No";
    else
        cout << ((sum - s) % 2 == 0 ? "Yes" : "No");

    return 0;
}