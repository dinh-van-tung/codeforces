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
          string s;
          cin >> n >> s;
          map<char, ll> mp;
          for (ll i = 0; i < n; i++)
          {
               if (mp.count(s[i]) == 0) 
                    mp[s[i]] = 2;
               else
                    mp[s[i]]++;
          }
          ll sum = 0;
          for (map<char, ll> :: iterator it = mp.begin(); it != mp.end(); it++)
               sum += it -> second;
          cout << sum << '\n';
     }
     return 0;
}
// DINH VAN TUNG