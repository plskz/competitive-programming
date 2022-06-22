#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, m;
    char c;
    cin >> h >> c >> m;
    int hh, mm;
    cin >> hh >> c >> mm;

    h -= hh;
    m -= mm;

    if (m < 0) m += 60, h--;
    if (h < 0) h += 24;

    cout << (h < 10 ? "0" : "") << h << ':' << (m < 10 ? "0" : "") << m;

    return 0;
}

// my 2nd sol. using scanf and prinf
/*
    int a, b, c, d;
    scanf("%d:%d%d:%d", &a, &b, &c, &d);
    printf("%02d:%02d", (a-c-(d>b)+24)%24, (b-d+60)%60);
*/