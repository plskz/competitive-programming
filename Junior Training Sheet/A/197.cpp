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

    map<int, string> mp{{0, "zero"},      {1, "one"},      {2, "two"},      {3, "three"},      {4, "four"},      {5, "five"},      {6, "six"},
                        {7, "seven"},     {8, "eight"},    {9, "nine"},     {10, "ten"},       {11, "eleven"},   {12, "twelve"},   {13, "thirteen"},
                        {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"},
                        {30, "thirty"},   {40, "forty"},   {50, "fifty"},   {60, "sixty"},     {70, "seventy"},  {80, "eighty"},   {90, "ninety"}};

    if (n <= 20 || n % 10 == 0)
        cout << mp[n];
    else
        cout << mp[n / 10 * 10] << '-' << mp[n % 10];

    return 0;
}