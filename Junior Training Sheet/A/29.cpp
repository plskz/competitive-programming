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

    // you can just use this shit to remove the '+'
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    // s.erase(remove(all(s), '+'), s.end()); // same as above but better

    // instead of using this shit
    // vector<int> v;
    // for(int i=0; i<s.size(); i++) {
    //     if(s[i] == '+')
    //         continue;
    //     else {
    //         int x = s[i] - '0';
    //         v.push_back(x);
    //     }
    // }
    // sort(all(v));

    sort(all(s));
    for (int i = 0; i < s.size(); i++) {
        if (i == s.size() - 1) {
            cout << s[i];
            return 0;
        } else
            cout << s[i] << '+';
    }

    return 0;
}