// DINH VAN TUNG
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
#include <map>
#include <stack>
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef unsigned long long ll;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     ll t;
     cin >> t;
     while (t--)
     {
          ll n;
          cin >> n;
          vector<vector<string> >v;
          map<string, ll> mp;
          for (ll i = 0; i < 3; i++)
          {
               vector<string> vtemp;
               for (ll j = 0; j < n; j++)
               {
                    string s;
                    cin >> s;
                    if (mp.find(s) == mp.end())
                         mp[s] = 1;
                    else
                         mp[s]++;
                    vtemp.push_back(s);
               }
               v.push_back(vtemp);
          }

          for (ll i = 0; i < 3; i++)
          {
               ll ans = 0;
               for (ll j = 0; j < n; j++)
               {
                    if (mp[v[i][j]] == 1)
                         ans += 3;
                    else if (mp[v[i][j]] == 2)
                         ans += 1;
               }
               cout << ans << ' ';
          }
          cout << '\n';

     }
     return 0;
}
// DINH VAN TUNG