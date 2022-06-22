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
    if (s == "0") return cout << 0, 0;
    int l = (s.size() - 1) / 2;
    string t = '1' + string(l * 2, '0');
    cout << (s == t ? l : l + 1);

    return 0;
}