#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    char mx;
    map<char, int> mp;
    for (auto c : s) {
        if (c > mx) mx = c;
        mp[c]++;
    }

    for (int i = 0; i < mp[mx]; i++) cout << char(mx);

    return 0;
}

// sort approach
/*
    string s;
    cin >> s;
    sort(all(s));
    int l = s.size();
    for(int i=l-1; s[l-1] == s[i]; i--)
        cout << s[i];
*/

// pseudo (C++) shortcode
/*
c = *max_element(all(s))
cnt = count(all(s), c)
while(cnt--)
    print c
*/