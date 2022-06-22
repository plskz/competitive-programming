#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 6; i++) {
        cout << i << endl;
        string s;
        cin >> s;
        if (s[0] == 'w' || s[0] == 'a' || s[2] == ' ') return cout << "grumpy", 0;
    }
    cout << "normal" << endl;

    return 0;
}