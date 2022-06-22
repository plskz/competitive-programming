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

    string s;
    cin >> s;
    bool isGood = 1;
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1]) isGood = 0;
    cout << (isGood ? "Good" : "Bad");

    return 0;
}