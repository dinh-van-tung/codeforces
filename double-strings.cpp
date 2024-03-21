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

ll cmp(string a, string b)
{
     if (a.length() != b.length())
     {
          if (a.length() < b.length())
               return 1;
          return 0;
     }
     else
     {
          if (a < b)
               return 1;
          return 0;
     }
}

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
          vector<string> v;
          map<string, ll> mp;
          for (ll i = 0; i < n; i++)
          {
               string s;
               cin >> s;
               v.push_back(s);
               mp[s] = 1;
          }
          
          for (ll i = 0; i < n; i++)
          {
               bool c = false;
               for (ll j = 0; j < ll(v[i].size()); j++)
               {
                    string a = v[i].substr(0, j + 1);
                    string b = v[i].substr(j + 1, ll(v[i].size()));
                    //cout << a << ' ' << b << '\n';
                    if (mp[a] == 1 && mp[b] == 1)
                    {
                         c = true;
                         break;
                    }
               }
               if (c == true)
                    cout << '1';
               else
                    cout << '0';
          }
          cout << '\n';
     }

     return 0;
}
// DINH VAN TUNG