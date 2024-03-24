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
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef unsigned long long ll;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // freopen("lucky.inp", "r", stdin); freopen("lucky.out", "w", stdout); 

     string he = "hello";
     ll index = 0;
     string s; cin >> s;
     for (ll i = 0; i < ll(s.length()); i++)
     {
          if (s[i] == he[index])
               index += 1;
     }
     if (index == ll(he.length())) cout << "YES";
     else cout << "NO";
     return 0;
}
// DINH VAN TUNG