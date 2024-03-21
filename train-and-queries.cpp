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
          map<ll, pair<ll, ll>> mp;
          ll n, q;
          cin >> n >> q;
          for (ll i = 0; i < n; i++)
          {
               ll x;
               cin >> x;
               if (mp.find(x) == mp.end())
                    mp[x] = make_pair(i + 1, i + 1);
               else
                    mp[x].second = i + 1;
          }
          while (q--)
          {
               ll a, b;
               cin >> a >> b;
               if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
                    cout << "NO\n";
               else
               {
                    if (mp[a].first <= mp[b].second)
                         cout << "YES\n";
                    else
                         cout << "NO\n";
               }
          }
     }
     return 0;
}
// DINH VAN TUNG