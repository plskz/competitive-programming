#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, n;
    cin >> x >> y >> n;

    for (int i = 1; i <= n; i++) {
        if (i % x == 0 && i % y == 0)
            cout << "FizzBuzz\n";
        else if (i % x == 0)
            cout << "Fizz\n";
        else if (i % y == 0)
            cout << "Buzz\n";
        else
            cout << i << '\n';
    }

    return 0;
}
