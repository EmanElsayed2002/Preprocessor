#include <bits/stdc++.h>

using namespace std;

#define cin(vec)        \
    for (auto &i : vec) \
    cin >> i
#define cout(vec)         \
    for (auto &i : vec)   \
        cout << i << " "; \
    cout << "\n";
#define sz(x) int(x.size())
#define pb(x) push_back(x)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define fi first
#define se second
#define ll long long
#define Mod 1'000'000'007
#define PI acos(-1)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define EPS 1e-6
#define endl "\n"
#define OO INT_MAX

void Eman_Elsayed()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(10);
    cerr << fixed << setprecision(10);
}
int main()
{
    Eman_Elsayed();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        cin(vec);
        cout(vec);
    }
    return 0;
}