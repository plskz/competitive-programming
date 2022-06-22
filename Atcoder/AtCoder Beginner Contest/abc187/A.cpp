#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int sum(string a) {
    int x = 0;
    for (auto c : a) x += c - '0';
    return x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    cout << max(sum(a), sum(b));

    return 0;
}