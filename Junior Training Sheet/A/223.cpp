#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0)
            a.push_back(x);
        else if (x > 0)
            b.push_back(x);
        else
            c.push_back(x);
    }

    if (!b.size()) {
        for (int i = 0; i < 2; i++) 
            b.push_back(a.back()), a.pop_back();
    }

    if (a.size() % 2 == 0) c.push_back(a.back()), a.pop_back();

    cout << a.size() << ' ';
    for (auto x : a) cout << x << ' ';

    cout << '\n' << b.size() << ' ';
    for (auto x : b) cout << x << ' ';

    cout << '\n' << c.size() << ' ';
    for (auto x : c) cout << x << ' ';

    return 0;
}