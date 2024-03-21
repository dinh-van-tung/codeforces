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
     
     map<string, ll> mp;
     ll n;
     cin >> n;
     while (n--)
     {
          string s;
          cin >> s;
          if (!mp.count(s))
          {
               cout << "OK\n";
               mp[s] = 1;
          }
          else
          {
               cout << s << mp[s] << '\n';
               mp[s]++;
          }
     }
     return 0;
}
// DINH VAN TUNG