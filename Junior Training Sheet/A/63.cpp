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

    int a = s.find("WUB");
    while (a != -1) {
        s.replace(a, 3, " ");
        a = s.find("WUB");
    }
    cout << s;

    return 0;
}