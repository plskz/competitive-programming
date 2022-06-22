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
    for (int i = 1, j = n * n; i < j; i++, j--) 
        cout << i << ' ' << j << ' ';

    return 0;
}

/*
    int n;
    cin >> n;
    int low = 1;
    int high = n*n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2; j++)
            cout << low++ << ' ' << high-- << ' ';
        cout << '\n';
    }
*/