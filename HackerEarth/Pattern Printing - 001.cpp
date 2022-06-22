#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if ((i + j) % 2 == 0)
                    cout << '*';
                else
                    cout << '.';
            }
            cout << '\n';
        }
    }

    return 0;
}