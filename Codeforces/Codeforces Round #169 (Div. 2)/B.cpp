#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) a[s[i] - 'a']++;

    int odd = 0;

    for (int i = 0; i < 26; i++) odd += a[i] & 1;

    cout << (odd == 0 || odd & 1 ? "First" : "Second");

    return 0;
}