#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s[] = {"ITIM", "PUTI", "PULA", "BUGHAW", "DILAW", "LUNTIAN", "TSOKOLATE", "LILA", "DALANDAN", "LUNTIAN PERO MEDYO DILAW"};
    vector<int> v(10);
    for (auto &x : v) cin >> x;
    cout << "SI " << s[max_element(all(v)) - v.begin()] << " AY SINIPA PALABAS.";

    return 0;
}