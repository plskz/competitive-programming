#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    int sum = 0;
    for (auto c : s) {
        if (c == '+')
            sum++;
        else
            sum = max(0, sum - 1);
    }
    cout << sum;

    return 0;
}