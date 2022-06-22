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

    int n;
    cin >> n;

    int untreated = 0, hired = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == -1) {
            if (!hired)
                untreated++;
            else
                hired--;
        } else {
            hired += temp;
        }
    }

    cout << untreated;

    return 0;
}