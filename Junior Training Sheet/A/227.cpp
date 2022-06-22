#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    int n;
    cin >> n;
    cout << a[n / 10] * a[n % 10];

    return 0;
}