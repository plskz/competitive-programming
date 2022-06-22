#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    for (auto c : s)
        if (c == 'H' || c == 'Q' || c == '9') return cout << "YES", 0;
    cout << "NO";

    return 0;
}