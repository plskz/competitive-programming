/*
ID: dummy.m1
PROG: ride
LANG: C++
*/
#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    string a, b;
    cin >> a >> b;
    int s1 = 1, s2 = 1;
    for (auto c : a) s1 *= (c - 'A' + 1);
    for (auto c : b) s2 *= (c - 'A' + 1);
    cout << (s1 % 47 == s2 % 47 ? "GO" : "STAY") << '\n';

    return 0;
}