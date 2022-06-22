#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;
    string s, tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s += tmp;
        s += '\n';
    }
    int x = s.find("OO");
    if (x != string ::npos) {
        cout << "YES\n";
        cout << s.substr(0, x) << "++" << s.substr(x + 2);
    } else {
        cout << "NO";
    }

    return 0;
}