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
    map<string, int> mp;
    for (int i = 0; i < 10; i++) {
        string x;
        cin >> x;
        mp[x] = i;
    }

    for (int i = 0; i < 80; i += 10) 
        cout << mp[s.substr(i, 10)];

    return 0;
}