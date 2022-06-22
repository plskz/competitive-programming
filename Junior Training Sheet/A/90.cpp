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
    int s = -1, e = -1;
    for (int i = 1; e == -1; i++) {
        char c;
        cin >> c;
        if (s == -1)
            if (c != '.')
                s = i;
            else if (c == '.')
                e = i;

        if (c == 'L') e = i - 1;
    }
    cout << s << ' ' << e;

    return 0;
}