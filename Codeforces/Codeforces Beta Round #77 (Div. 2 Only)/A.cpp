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

    if (s.find("0000000") != string ::npos || s.find("1111111") != string ::npos)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}