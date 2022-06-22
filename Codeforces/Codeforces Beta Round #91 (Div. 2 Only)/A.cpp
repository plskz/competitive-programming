#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int n;
    cin >> n;

    int lucky[] = {4, 7, 47, 74, 447, 477, 747};
    bool nice = 0;
    for (int i = 0; i < 7; i++) {
        if (n % lucky[i] == 0) nice = 1;
    }
    cout << (nice ? "YES" : "NO");
    return 0;
}
