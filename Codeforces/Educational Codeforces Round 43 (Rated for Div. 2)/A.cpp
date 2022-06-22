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

    if (n == 1)
        cout << s;
    else {
        int cnt = count(all(s), '0');
        cout << 1;
        for (int i = 0; i < cnt; i++) cout << 0;
    }

    return 0;
}

/*
short code

    int n;
    string s;
    cin >> n >> s;

    if(n == 1) return cout << s, 0;

    sort(allr(s));
    int x = s.find_last_of('1');
    cout << s.substr(x);
*/