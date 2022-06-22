#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    int X = count(all(s), 'X');
    cout << abs(X - n / 2) << '\n';
    for (auto &c : s) {
        if (X < n / 2 && c == 'x')
            c = 'X', X++;
        else if (X > n / 2 && c == 'X')
            c = 'x', X--;
    }
    cout << s;

    return 0;
}