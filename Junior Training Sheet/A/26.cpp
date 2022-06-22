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
    getline(cin, s);
    set<char> sc;

    // for(int i=0; i<s.size(); i++) {
    //     if(s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == ',') continue;
    //     sc.insert(s[i]);
    // }
    for (char c : s)
        if (isalpha(c)) sc.insert(c);
    cout << sc.size();

    return 0;
}