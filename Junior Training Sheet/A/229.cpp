#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    string c = to_string(stoi(a) + stoi(b));
    a.erase(remove(all(a), '0'), a.end());
    b.erase(remove(all(b), '0'), b.end());
    c.erase(remove(all(c), '0'), c.end());
    cout << (to_string(stoi(a) + stoi(b)) == c ? "YES" : "NO");

    return 0;
}