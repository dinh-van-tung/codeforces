#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <iomanip>
using namespace std;
#define en '\n';
typedef long long ll;
// typedef unsigned long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

vector<ll> v(1e6 + 100, 0);

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("pair.inp", "r", stdin); freopen("pair.out", "w", stdout);

     string s; cin >> s;
     ll n = s.length(), t; cin >> t;
     for (ll i = 1; i <= t; i++)
     {
          ll x; cin >> x;
          v[x]++;
     }
     bool f = false;
     for (ll i = 1; i <= n / 2; i++)
     {
          if (v[i] & 1) f = !f;
          if (f) swap(s[i - 1], s[n - i]);
     }

     cout << s;

     return 0;
}