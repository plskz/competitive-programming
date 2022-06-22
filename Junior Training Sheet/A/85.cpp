#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // string s, x;
    // cin >> s >> x;

    // string a, b;
    // bool m = 0;
    // for(int i=0; i<s.size(); i++) {
    //     if(s[i] == '|') {m = 1; continue;}
    //     if(!m)
    //         a += s[i];
    //     else
    //         b += s[i];
    // }

    string a, b;
    string x;
    getline(cin, a, '|');
    getline(cin, b);
    cin >> x;
    // cout << a << '\n' << b;

    for (int i = 0; i < x.size(); i++) {
        if (a.size() < b.size())
            a += x[i];
        else
            b += x[i];
    }

    if (a.size() == b.size())
        cout << a << '|' << b;
    else
        cout << "Impossible";

    return 0;
}