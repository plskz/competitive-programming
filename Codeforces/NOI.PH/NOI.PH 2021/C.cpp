#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 0, b = 0, c = 0;
    set<string> names;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        names.insert(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string x;
        cin >> x;
        if (names.count(x))
            a++;
        else
            c++;
    }
    cout << a << '\n' << n - a << '\n' << c;

    return 0;
}