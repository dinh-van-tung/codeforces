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
#include <queue>
#include <numeric>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef unsigned long long ll;
ll mod = 1e9 + 7;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // freopen("lucky.inp", "r", stdin); freopen("lucky.out", "w", stdout); 

     ll n; cin >> n;
     while (n--)
     {
          string s; cin >> s;
          if (ll(s.length()) > 10)
               cout << *s.begin() << ll(s.length()) - 2 << *--s.end() << '\n';
          else
               cout << s << '\n';
     }
     return 0;
}
// DINH VAN TUNG