#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <iomanip> 
using namespace std;
#define en '\n';
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     //freopen("ROBOT.INP", "r", stdin);
     //freopen("ROBOT.OUT", "w", stdout);

     ll t;
     cin >> t;
     while (t--)
     {
          vector<pair<ll, ll> > v;
          pair<ll, ll> p;
          for (ll i = 1; i <= 4; i++)
          {
               cin >> p.first >> p.second;
               v.push_back(p);
          }
          ll a = v[0].first, b = v[0].second, c = v[0].first, d = v[0].second;
          for (ll i = 1; i < 4; i++)
          {
               if (v[i].first != a)
                    c = v[i].first;
               if (v[i].second != b)
                    d = v[i].second;
          }
          cout << (abs(a - c) * abs(b - d)) << '\n';
     }

     return 0;
}