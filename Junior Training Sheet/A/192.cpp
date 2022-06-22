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
    string x = "hello";
    int i = 0;
    for (auto c : s) i += c == x[i];
    cout << (i == 5 ? "YES" : "NO");

    return 0;
}