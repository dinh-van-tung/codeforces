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

     // freopen("TACHSO.INP", "r", stdin);
     // freopen("TACHSO.OUT", "w", stdout); 

     ll t;
     cin >> t;
     while (t--)
     {
          map<char, vector<ll> > mphead;
          map<char, vector<ll> > mptail;
          ll n;
          cin >> n;
          for (ll i = 0; i < n; i++)
          {
               string s;
               cin >> s;
               if (mphead.find(s[0]) == mphead.end())
               {
                    vector<ll> v(11, 0);
                    v[s[1] - 'a']++;
                    mphead[s[0]] = v;
               }
               else
                    mphead[s[0]][s[1] - 'a']++;
               
               if (mptail.find(s[1]) == mptail.end())
               {
                    vector<ll> v(11, 0);
                    v[s[0] - 'a']++;
                    mptail[s[1]] = v;
               }
               else
                    mptail[s[1]][s[0] - 'a']++;
          }

          ll ans = 0;
          for (map<char, vector<ll> > :: iterator i = mphead.begin(); i != mphead.end(); i++)
          {
               //cout << i -> first << '\n';
               for (ll j = 0; j < (i -> second).size(); j++)
               {
                    //cout << (i -> second)[j] << ' ';
                    for (ll k = j + 1; k < (i -> second).size(); k++)
                         ans += (i -> second)[j] * (i -> second)[k];
               }
               //cout << '\n';
          }
          //cout << '\n';
          for (map<char, vector<ll> > :: iterator i = mptail.begin(); i != mptail.end(); i++)
          {
               //cout << i -> first << '\n';
               for (ll j = 0; j < (i -> second).size(); j++)
               {
                    //cout << (i -> second)[j] << ' ';
                    for (ll k = j + 1; k < (i -> second).size(); k++)
                         ans += (i -> second)[j] * (i -> second)[k];
               }
               //cout << '\n';
          }
          cout << ans << '\n';
     }
     
     return 0;
}
// DINH VAN TUNG