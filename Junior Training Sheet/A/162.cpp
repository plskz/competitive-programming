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
    string a[100], b[100];
    string captain;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (b[i] == "captain") captain = a[i];
    }

    for (int i = 0; i < n; i++)
        if (b[i] == "rat") cout << a[i] << '\n';

    for (int i = 0; i < n; i++)
        if (b[i] == "woman" || b[i] == "child") cout << a[i] << '\n';

    for (int i = 0; i < n; i++)
        if (b[i] == "man") cout << a[i] << '\n';

    cout << captain;

    return 0;
}